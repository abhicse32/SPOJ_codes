#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<vi>
#define rows 105
#define cols 105

typedef struct Cell{
    int ht, r, c;
    Cell(int r_, int c_, int ht_):r(r_), c(c_), ht(ht_){}
}Cell;

class comp{
    public:
    bool operator()(const Cell& c1, const Cell& c2){
        return c1.ht > c2.ht;
    }
};

vii mesh(rows, vi(cols, 0));

int flood_fill(int n, int m){
    priority_queue<Cell, vector<Cell>, comp> pq;
    for(int i=0;i<m;++i){ 
        pq.push(Cell(0, i, mesh[0][i])), pq.push(Cell(n-1, i, mesh[n-1][i]));
        mesh[0][i] = mesh[n-1][i] = INT_MIN;
    }
    for(int i=1;i<n-1;i++){
        pq.push(Cell(i, 0, mesh[i][0])), pq.push(Cell(i, m-1, mesh[i][m-1]));
        mesh[i][0] =  mesh[i][m-1] = INT_MIN;
    }
    int water = 0, curr_max = pq.top().ht, r, c;
    /*for(int i=0;i<n;++i){
        for(int j=0;j<m;++j) cout << mesh[i][j] <<" ";
        cout <<endl;
    }*/
    while(!pq.empty()){
        Cell top = pq.top();    
        r = top.r, c = top.c;
        pq.pop();
        if(top.ht > curr_max) curr_max = top.ht;
        if(top.ht <= curr_max){
            if(c - 1 >= 0 && mesh[r][c - 1] > 0)
                pq.push(Cell(r, c - 1, mesh[r][c - 1])), mesh[r][c - 1] = INT_MIN;
            if(c + 1 < m && mesh[r][c + 1] > 0)
                pq.push(Cell(r, c + 1, mesh[r][c + 1])), mesh[r][c + 1] = INT_MIN;
            if(r - 1 >= 0 && mesh[r - 1][c] > 0)
                pq.push(Cell(r - 1, c, mesh[r - 1][c])), mesh[r - 1][c] = INT_MIN; 
            if(r + 1 < n && mesh[r + 1][c] > 0)
                pq.push(Cell(r + 1, c, mesh[r + 1][c])), mesh[r + 1][c] = INT_MIN;  
            water += (curr_max - top.ht);
        }
        //cout << curr_max <<" " << top.ht <<" " << top.r <<" " << top.c <<" " << water <<endl;
    }
    return water;
}

int main(){
    int t, i,j,k, m, n;
    scanf("%d",&t);
    while(t--){
        cin >> n >> m;
        for(int i=0;i<n;++i)
            for(int j=0;j<m;++j)
                scanf("%d", &mesh[i][j]);
        cout << flood_fill(n, m) <<endl;
    }
}


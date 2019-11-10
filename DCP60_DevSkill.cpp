#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<vi>
#define max_n 1005

vector<string> city(max_n);
vii count_arr(max_n, vi(max_n, 0));
typedef struct Cell{
    int r, c, dist;
    Cell(int r_, int c_, int d_): r(r_), c(c_), dist(d_){}
}Cell;

class comp{
    public:
        bool operator()(const Cell& c1, const Cell& c2){
            return c1.dist > c2.dist;
        }
};
int dx[4]={1, -1, 0, 0};
int dy[4]={0, 0, 1, -1};

int djikstra(int n, int m){
    priority_queue<Cell, vector<Cell>, comp> que;
    que.push(Cell(0, 0, 0));
    count_arr[0][0] = 0;
    int x;
    while(!que.empty()){
        Cell t_cell = que.top();
        que.pop();
        for(int i=0;i<4;++i){
            int r = t_cell.r + dx[i];
            int c = t_cell.c + dy[i];
            if(r >=0 && r < n && c >=0 && c < m && count_arr[r][c] > (x = t_cell.dist + 
                    !(city[r][c] == city[t_cell.r][t_cell.c])))
                que.push(Cell(r,c,x)), count_arr[r][c] = x;
        } 
    } 
    /*for(int i=0;i<n;++i){
        for(int j=0;j<m;++j)
            cout << count_arr[i][j] <<" ";
        cout <<endl;
    }*/
    return count_arr[n-1][m-1];
}

int main(){
    int i,j,k,m,n, t;
    cin >> t;
    for(int k=1;k<=t;++k){
        scanf("%d%d\n",&n,&m);
        for(int i=0;i<n;++i) cin >> city[i];
        for(int i=0;i<n;++i) 
            fill(count_arr[i].begin(), count_arr[i].end(), INT_MAX);
        int res = djikstra(n, m);
        cout <<"Case " << k <<": " << res <<endl;
    }
}

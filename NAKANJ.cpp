#include <bits/stdc++.h>
using namespace std;
#define sc(a) scanf("%d\n",&a)
#define scc(a, b) scanf("%d %d",&a, &b)
#define vi vector<int>
#define vii vector<vi>
#define max_n 1000005

vii arr(9, vi(9, INT_MAX));
typedef struct Location{
    int row, col;
    Location(int r, int c): row(r), col(c){}
}Location;

void add_cell(queue<Location>& que, int next_row, int next_col, int curr_cost){
    que.push(Location(next_row, next_col));
    arr[next_row][next_col] = curr_cost + 1;
}

int bfs(const Location& loc1, const Location& loc2){
    queue<Location> que;
    arr[loc1.row][loc1.col] = 0;
    que.push(loc1);
    while(!que.empty()){
        queue<Location> tmp_que;
        while(!que.empty()){
            Location curr_loc = que.front();
            int row = curr_loc.row, col = curr_loc.col;
            int curr_cost = arr[row][col];
            if(row + 2 < 8){
                if(col + 1 < 8 && arr[row + 2][col + 1] > curr_cost)
                    add_cell(tmp_que, row + 2, col + 1, curr_cost);
                if(col - 1 >=0 && arr[row + 2][col - 1] > curr_cost)
                    add_cell(tmp_que, row + 2, col - 1, curr_cost);
            }
            if(row - 2 >= 0){
                if(col + 1 < 8 && arr[row - 2][col + 1] > curr_cost)
                    add_cell(tmp_que, row - 2, col + 1, curr_cost);
                if(col - 1 >=0 && arr[row - 2][col - 1] > curr_cost)
                    add_cell(tmp_que, row - 2, col - 1, curr_cost);
            }
            if(col + 2 < 8){
                if(row + 1 < 8 && arr[row + 1][col + 2] > curr_cost)
                    add_cell(tmp_que, row + 1, col + 2, curr_cost);
                if(row - 1 >=0 && arr[row - 1][col + 2] > curr_cost)
                    add_cell(tmp_que, row - 1, col + 2, curr_cost);
            }
            if(col - 2 >= 0){
                if(row + 1 < 8 && arr[row + 1][col - 2] > curr_cost)
                    add_cell(tmp_que, row + 1, col - 2, curr_cost);
                if(row - 1 >=0 && arr[row - 1][col - 2] > curr_cost)
                    add_cell(tmp_que, row - 1, col - 2, curr_cost);
            }
            que.pop(); 
        }     
        que = tmp_que;
    }
    return arr[loc2.row][loc2.col];
}

int main(){
    int t, i, j, k, l;
    sc(t);
    char s_col, e_col;
    int s_row, e_row;
    while(t--){
        scanf("%c%d %c%d\n",&s_col, &s_row, &e_col, &e_row);
        Location start_loc(s_row - 1, s_col - 'a'), end_loc(e_row -1, e_col - 'a');
        cout << bfs(start_loc, end_loc) <<endl;
        for(auto& v: arr) fill(v.begin(), v.end(), INT_MAX);
    }
}

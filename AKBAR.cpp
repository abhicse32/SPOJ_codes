#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<vi>
#define max_n 1000005

bool bfs(vii& adlist, int n, vector<int>& visited, int s, int k, int m){
    if(visited[s] != -1) return false;
    visited[s] = m;
    queue<int> que;
    que.push(s);
    while(!que.empty() && k--){
        queue<int> tmp_que;
        while(!que.empty()){
            int src = que.front();
            for(auto v: adlist[src]){
                if(visited[v] != m){
                    if(visited[v] == -1) visited[v] = m, tmp_que.push(v);
                    else return false;
                }
            }
            que.pop();
        }
        que = tmp_que;
    }
    return true;
}

bool check(vector<int> &visited, int n){
    bool result = true;
    for(int i = 1; result && i<=n; result &= (visited[i]!=-1), ++i);
    return result;
}

int main(){
    int m,n,r,t, s, d, k;
    vii adlist(max_n, vi{});
    vector<int> visited(max_n, -1);
    cin >> t;
    while(t--){
        cin >> n >> r >> m;
        for(int i=1;i<=n;++i) adlist[i].erase(adlist[i].begin(), adlist[i].end());
        fill_n(visited.begin(), n+1, -1);
        for(int i=0;i<r;++i){
            scanf("%d%d", &s, &d);
            adlist[s].push_back(d);
            adlist[d].push_back(s);
        }
        bool result = true;
        for(int i=1;i<=m;++i){
            scanf("%d%d",&s,&k);
            result &= bfs(adlist, n, visited, s, k, i);
        } 
        if(result && check(visited, n))
            cout << "Yes\n";
        else cout << "No\n";
    }
}

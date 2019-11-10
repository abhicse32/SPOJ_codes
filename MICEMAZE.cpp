#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<vi>
#define max_n 105


class comp{
    public:
        bool operator()(const pii& p1, const pii& p2){
            return p1.first < p2.first;
        }
};

int djikstra(vector<vector<pii> >& adlist, vi& arr_cost, int src, int time){
    priority_queue<pii, vector<pii>, comp> pq;
    arr_cost[src] = 0;
    pq.push(make_pair(0, src));
    while(!pq.empty()){
       pii p = pq.top();
       pq.pop();
       if(arr_cost[p.second] < p.first) continue;
       for(auto &v: adlist[p.second]){
           int new_dist = p.first + v.second;
           if(new_dist < arr_cost[v.first])
                pq.push(make_pair(new_dist, v.first)), 
                arr_cost[v.first] = new_dist;
       } 
    }
    int count = 0;
    for(int i=1;i<arr_cost.size();++i)
        if(arr_cost[i] <= time) ++count;
    return count;
}

int main(){
   int i, j, k, t, n, e, m, a,b,c; 
   scanf("%d%d%d%d", &n, &e, &t, &m);
   vector<vector<pii> > adlist(n+1, vector<pii>{});
   vi arr_cost(n+1, INT_MAX);
   for(int i=0;i<m;++i){
       scanf("%d%d%d",&a, &b, &c);
       adlist[b].push_back(make_pair(a, c)); 
   }
   cout << djikstra(adlist, arr_cost, e, t);
}

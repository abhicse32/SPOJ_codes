#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<vi>
#define mii map<int, int>
#define si set<int>
#define sci(n) scanf("%d",&n)
#define scii(n, m) scanf("%d%d",&n,&m)
#define sti stack<int>
#define qi queue<int>
#define pii pair<int,int>
#define ll long long
#define MAXN 100005

vii st;
vi exp_2s;

void pre_compute(vi& arr, int n, int K){
    for(int i=0;i < n; ++i)
        st[i][0] = arr[i];
    for(int j = 1; j <= K; ++j){
        int pow2j = (1 << j);
        for(int i=0; i + pow2j <= n; ++i)
            st[i][j] = min(st[i][j-1], st[i + (1 << (j-1))][j-1]);
    }
}

void pre_compute_exp2s(int n){
    for(int i=2;i<=n;++i)
        exp_2s[i] = exp_2s[i>>1] + 1;
}

int main(){
    int n,i,j,k,q;
    sci(n);
    vi arr(n, 0);    
    for(int i=0;i<n;++i) sci(arr[i]);
    exp_2s.assign(n+1, 0);
    pre_compute_exp2s(n);
    int K = exp_2s[n] + 1;
    st.assign(n, vi(K, 0) );
    pre_compute(arr, n, K);
    sci(q);
    while(q--){
        scii(j, k);
        int exp = exp_2s[k - j + 1];
        printf("%d\n", min(st[j][exp], st[k-(1<<exp) + 1][exp]));
    }
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll, ll>
#define mod 1000000007

pll get_fibs(ll n){
    if(!n) return {0, 1};
    pll c_fibs = get_fibs(n>>1);
    ll t1 = (c_fibs.first * ((c_fibs.second << 1) % mod - c_fibs.first + mod) % mod ) % mod;
    ll t2 = ((c_fibs.first * c_fibs.first) % mod + (c_fibs.second * c_fibs.second) % mod) % mod;
    if(n&1) return {t2, t1 + t2};
    return {t1, t2};
}
int main(){
    int t, i;
    ll n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        pll fibs = get_fibs(n), coeffs = get_fibs(m-n+1);
        cout << ((fibs.first * coeffs.first) % mod + (fibs.second * (coeffs.second - 1)) % mod) % mod <<endl;
    }
}

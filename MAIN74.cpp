#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

// used fast_doubling method to compute the fibonacci numbers
// f(2n) = f(n)(2f(n+1) - f(n)), f(2n+1) = f(n)^2 + f(n+1)^2
pair<ll, ll> get_nums(ll n){
    if(!n) return {0, 1};
    pair<ll, ll> p = get_nums(n >> 1);
    ll term1 = (p.first * ((p.second << 1) % mod - p.first + mod) % mod ) % mod;
    ll term2 = ((p.first * p.first) % mod + (p.second * p.second) % mod) % mod;
    if(n&1) return {term2, term1 + term2};
    return {term1, term2};
}

int main(){
    ll n;
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        if(n==0) cout << 0;
        else if(n==1) cout << 2;
        else {
            pair<ll, ll> p = get_nums(n+1);
            cout << (p.first + p.second) % mod;
        }
        cout << endl;
    }  
}

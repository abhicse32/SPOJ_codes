#include <iostream>
using namespace std;
#define ull unsigned long long
ull get_res(ull n){
    if(n < 3) return n;
    ull exp = n / 3, rem = n % 3;
    if(rem){
        if(rem==1) --exp;
        rem = 3 - rem;
    }
    ull res = 1, mod = 1000000007, b = 3;
    while(exp){
       if(exp & 1)
           res = (res * b) % mod;
       b = (b * b) % mod;
       exp >>= 1;
    }
    return (res * (1<< rem)) % mod;
}
int main(){
    int t, i, j;
    ull n;
    cin >> t;
    while(t--){
        scanf("%llu", &n);
        printf("%llu\n", get_res(n));
    } 
}

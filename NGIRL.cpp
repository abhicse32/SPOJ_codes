#include <iostream>
#include <vector>
#include <bitset>
#include <cmath>
#define sci(a) scanf("%d", &a)
using namespace std;
const int max_size = 1e5 + 2;
#define ull unsigned long long 
#define vull vector<ull>
bitset<max_size> is_prime;
vull primes;

void sieve(){
    is_prime.set();
    primes.push_back(4);
    for(int i=4;i<max_size;i += 2) is_prime[i] = false;
    for(ull i=3; i < max_size; i+=2){
        if(is_prime[i]){
            primes.push_back(i*i);
            for(ull j=i*i; j<max_size; j += i)
                is_prime[j] = false;
        }
    }
}

int main(){
    int t;
    ull n, k;
    sieve();
    cin >> t;
    while(t--){
        scanf("%llu%llu", &n, &k);
        auto iter1 = lower_bound(primes.begin(), primes.end(), n);
        auto iter2 = lower_bound(primes.begin(), primes.end(), k);
        int diff1 = (iter1 - primes.begin()) + 1;
        int diff2 = ( iter2 - primes.begin()) + 1;

        int choices = (n > 3)?(*iter1 > n?--diff1:diff1):0;
        int can_give = choices - ( k > 3?(*iter2 > k?--diff2:diff2):0);
        cout << choices <<" " << (can_give < 0?0:can_give) <<endl;
    } 
}

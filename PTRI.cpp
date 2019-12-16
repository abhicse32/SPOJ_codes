#include <iostream>
#include <vector>
#include <bitset>
#include <cmath>
#define sci(a) scanf("%d", &a)
#define vii vector<pair<int,int> >
using namespace std;
const int max_size = 1e8 + 1;
vii primes(max_size, make_pair(-1,-1));
bitset<max_size> is_prime;

void sieve(){
    is_prime.set();
    int sq = ceil(sqrt(max_size));
    is_prime[0] = is_prime[1] = false;
    int tri_r = 2, tri_c = 1; 
    primes[2].first = 1, primes[2].second = 1;
    for(int i=4;i<max_size;i += 2) is_prime[i] = false;
    for(int i=3; i < max_size; i+=2){
        if(is_prime[i]){
            primes[i].first = tri_r, primes[i].second = tri_c;
            if(++tri_c > tri_r) ++tri_r, tri_c = 1;
            if(i <= sq){
                for(int j=i*i; j<max_size; j += i)
                    is_prime[j] = false;
            }
        }
    }
}

int main(){
    int t, n;
    sieve();
    sci(t);
    while(t--){
        sci(n);
        if(primes[n].first != -1)
            printf("%d %d\n", primes[n].first, primes[n].second);
        else printf("-1\n");
    }
}

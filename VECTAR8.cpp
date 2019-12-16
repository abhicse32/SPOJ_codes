#include <iostream>
#include <vector>
#include <bitset>
#include <cmath>
#define sci(a) scanf("%d", &a)
#define vi vector<int>
using namespace std;
const int max_size = 1e6 + 5;
vector<int> primes(max_size);
bitset<max_size> is_prime;


bool check_special(int n){
    int pow = 1, k=0;
    while(n){
        int x = n % 10;
        k +=(x*pow);
        if(!x || !is_prime[k]) return false;
        n /= 10;
        pow = (pow << 3) + (pow << 1); 
    }
    return true;
}

void sieve(){
    is_prime.set();
    int sq = ceil(sqrt(max_size));
    is_prime[0] = is_prime[1] = false;
    for(int i=4;i<max_size;i += 2) is_prime[i] = false;
    for(int i=3; i<=sq; i+=2){
        if(is_prime[i]){
            for(int j=i*i; j<max_size; j += i)
                is_prime[j] = false;
        }
    }
    for(int i=2;i<max_size; ++i)
        primes[i] = primes[i-1] + check_special(i);

}

int main(){
    int t, n;
    sieve();
    sci(t);
    while(t--){
        sci(n);
        printf("%d\n", primes[n]);
    } 
}

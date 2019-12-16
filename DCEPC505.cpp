#include <iostream>
#include <vector>
#include <bitset>
#include <cmath>
#include <algorithm>
#define sci(a) scanf("%d", &a)
#define vi vector<int>
using namespace std;
const int max_size = 1.0528e7;
vi is_prime(max_size, 0);
vi primes;
void sieve(){
    int sq = sqrt(max_size);
    for(int i=4;i<max_size; i+=2) is_prime[i] = 2;
    for(int i=3;i<=sq; i+=2){
        if(!is_prime[i]){
            for(int j=i*i; j<max_size; j+=i)
                is_prime[j] = i;
        }
    }
    for(int i=6;i<max_size;++i)
        if(is_prime[i] && is_prime[i] != i/is_prime[i] && !is_prime[i/is_prime[i]])
            primes.push_back(i);
}
int main(){
    sieve();
    int t, n;
    sci(t);
    while(t--){
        sci(n);
        cout << primes[n-1] <<endl;
    }
}

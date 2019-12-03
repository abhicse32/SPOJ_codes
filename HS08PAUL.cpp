#include <iostream>
#include <bitset>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
const int max_size = 1e7;
#define vi vector<int>
vector<int> is_prime(max_size, true);
void sieve(int sq){
    is_prime[0] = is_prime[1] = false;
    for(int i=4;i<max_size; i+=2) is_prime[i] = false;
    for(int i=3;i <= sq; i+=2){
        if(is_prime[i]){
            for(int j = i*i; j < max_size; j+=i)
                is_prime[j] = false;
        }
    }    
}

vi get_hprimes(int sq){
    int sq4 = ceil(sqrt(sq));
    vector<int> primes;
    for(int y = 1; y<= sq4; ++y){
        int y4 = y*y; y4*=y4;
        for(int x = 1, k; (k=x*x) <= (max_size - y4); ++x){
            int sum = k + y4;
            if(sum < max_size && is_prime[sum])
                is_prime[sum] = false, primes.push_back(sum);
        }
    }
    sort(primes.begin(), primes.end());
    return primes;
}

int main(){
    int sq = ceil(sqrt(max_size));
    sieve(sq);
    vi primes = get_hprimes(sq);
    for(int i=2, j=0; i< max_size; ++i){
        if(i >= primes[j] && j<primes.size()) ++j;
        is_prime[i] = j;
    }
    int t,n;
    cin >> t;
    while(t--){
        scanf("%d", &n);
        printf("%d\n", is_prime[n]);
    }
}

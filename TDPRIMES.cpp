#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;
#define mod 100
#define sz 100000000
bitset<sz> is_prime;
void generate_primes(){
    is_prime.set();
    printf("2\n");
    int sq = sqrt(sz);
    for(int i=4;i<sz; i+=2) is_prime[i] = false;
    int p_count = 1;
    for(int i=3;i< sz; i+=2){
       if(is_prime[i]){
           ++p_count;
           if(p_count % 100 == 1) printf("%d\n", i);
           if(i <= sq)
                for(int j=i*i;j<sz; j+=i) is_prime[j]= false;
       }
    }
}
int main(){
    generate_primes();
    return 0; 
}

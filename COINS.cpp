#include <map>
#include <algorithm>
#include <cstdio>
using namespace std;
map<long long, long long> ar;
long long sum(long long n){
	if(n==0) return 0;
	if(ar[n]!=0) return ar[n];
    long long p=sum(n/2)+sum(n/3)+sum(n/4);
    if(p>n) ar[n]=p;
    else  ar[n]=n;
    return ar[n]; 
}
int main(){
	long long n;
	while(scanf("%lld",&n)!=EOF){
       printf("%lld\n",sum(n));
	}return 0;
}
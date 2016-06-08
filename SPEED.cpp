#include <cstdio>
long long gcd(long long a,long long b){
	if(a==0) return b;
	else if(b==0) return a;
	else return gcd(b,a%b);
}
int main(){
     int n;
     scanf("%d",&n);
     long long m,p,k;
     while(n--){
     	scanf("%lld%lld",&m,&p);
           printf("%lld\n", (m>p?m-p:p-m)/gcd(m=m<0?m*-1:m,p=p<0?p*-1:p));
     }return 0;
}
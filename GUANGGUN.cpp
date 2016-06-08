#include <cstdio>
int main(){
	long long n,i,j,res,t;
	while(scanf("%lld",&n)!=EOF){
      i=n/9;
      j=n%9;;
        	res=81*i+j*j;
         printf("%lld\n",res);
     }return 0;
}
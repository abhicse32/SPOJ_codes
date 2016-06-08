#include <cstdio>
int main(){
	int n,i=1,j,sum;
   scanf("%d",&n);
   sum=0;
   j=n/i-i+1;
   while(j>0){
   	   sum+=j;
   	   i++;
   	   j=n/i-i+1;
   }
   printf("%d\n",sum);
   return 0;
}
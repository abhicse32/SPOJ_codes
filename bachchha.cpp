/*#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int arr[1000000];
int main(){
	int i,j,k;
	for(i=2,j=0;i<1000000;i++){
		 if(!arr[i]){arr[j++]=i;
     for(k=i+i;k<1000000;k+=i)arr[k]=1;
		 }

	}
		int num=arr[2];
		printf("%d\n",num);
		for(j=1;j<20;j++){
		  int num1=(pow(num,j+1)-1)/(num-1);
		  int num2=sqrt(num1);
		  k=0;
		  while(arr[k]<=num2){
		  	  if(num1%arr[k]==0)break;
		  	  else k++;
		  }if(arr[k]>num2) printf("%d\n",j);
		}
	return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int n,t,s,k;
	while(scanf("%lld",&n)!=EOF)
	{
		if(n<10)
		{
			printf("%lld\n",n*n);
			continue;
		}
		t=((n-10)/9)+1;
		k=10+((t-1)*9);
		s=((81*t)+1)+((n-k)*(n-k+2));
		printf("%lld\n",s);
	}
	return 0;
}
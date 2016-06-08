#include <cstdio>
#define gc getchar_unlocked
#define len 10017
int arr1[len];
int arr2[len];
inline int fast(){int n=0,flag=0;char ch=gc();while(ch<48 && ch!='-')ch=gc(); if(ch=='-'){
	flag=1;ch=gc();}
while(ch>47){n=(n<<1)+(n<<3)+ch-48;ch=gc();} if(flag)n=n*-1;return n;}
int main(){
	int N,M,i,j,k;
	long long sum1,sum2,max;
	while(true){
		N=fast();
		if(N==0) break;
		for(i=0;i<N;i++)arr1[i]=fast();
		M=fast();
	    for(i=0;i<M;i++) arr2[i]=fast();
        k=M>N?N:M;
        sum1=0;sum2=0;
        for(i=0,j=0;i<k && j<M;){
        	if(arr1[i]>arr2[j])sum2+=arr2[j++];
        	else if(arr1[i] < arr2[j]) sum1+=arr1[i++];
        	else{
                  max=sum1>sum2?sum1:sum2;
                  sum1=arr1[i++]+max;
                  sum2=arr2[j++]+max;
        	}}
  
            for(;i<N;i++)sum1+=arr1[i];
          for(;j<M;j++)sum2+=arr2[j];
          	printf("%lld\n",sum1>sum2?sum1:sum2);
	}
return 0;
}

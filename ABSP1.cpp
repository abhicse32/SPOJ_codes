#include <cstdio>
#define gc getchar_unlocked
int arr[10005];
inline int fast(){int n=0;char ch=gc();while(ch<48)ch=gc();
while(ch>47){n=(n<<1)+(n<<3)+ch-48;ch=gc();}return n;}
int main(){
	int N,i,M,j,k;
	long long sum;
    N=fast();
    while(N--){
    	sum=0;
       M=fast();
       for(i=0;i<M;i++) arr[i]=fast();
       	k=M-1;
       	for(j=M-1;j>=0;j--,k-=2)sum+=k*arr[j];
       		printf("%lld\n",sum);
    }return 0;
}
#include<stdio.h>
unsigned long long int MOD=1000000007;
int i, j, k;
unsigned long long fib_fn(int n)
{
	unsigned long long int fib[2][2]={{1,1},{1,0}}, ans[2][2]={{1,0},{0,1}}, temp[2][2]={{0,0},{0,0}};
	while(n)
	{
		if(n&1)
		{
			for(i=0;i<2;i++)
				for(j=0;j<2;j++)
					temp[i][j]=0;
			for(i=0;i<2;i++) 
				for(j=0;j<2;j++)
					for(k=0;k<2;k++)
						temp[i][j]=(temp[i][j]+ans[i][k]*fib[k][j])%MOD;
			for(i=0;i<2;i++) 
				for(j=0;j<2;j++) 
					ans[i][j]=temp[i][j];
		}
		for(i=0;i<2;i++)
				for(j=0;j<2;j++)
					temp[i][j]=0;
		for(i=0;i<2;i++) 
			for(j=0;j<2;j++) 
				for(k=0;k<2;k++)
					temp[i][j]=(temp[i][j]+fib[i][k]*fib[k][j])%MOD;
		for(i=0;i<2;i++)
			for(j=0;j<2;j++) 
				fib[i][j]=temp[i][j];
				n=n>>1;

	}
	return (ans[0][1])%MOD;
}

int main()
{
	int t,m,n,i;
	scanf("%d",&t);
	int arr[t][2];
	for(i=0;i<t;i++)
		scanf("%d%d",&arr[i][0],&arr[i][1]);
		printf("\n");
		for(i=0;i<t;i++)
		printf("%lld\n", (fib_fn(arr[i][1]+2)-fib_fn(arr[i][0]+1)+MOD)%MOD);
	return 0;
}

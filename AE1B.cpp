#include <cstdio>
#include <cstdlib>
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main(){
	int n,k,s,i,sum=0;
	scanf("%d%d%d",&n,&k,&s);
	int arr[n];
	for(i=0;i<n;i++)scanf("%d",&arr[i]);
	qsort(arr,n,sizeof(int),compare);
    //for(i=0;i<n;i++) printf("%d\n",arr[i]);
    	printf("\n");
    s=s*k;
    i=n-1; sum+=arr[i];
    while(sum<s){
    	i--;
    	sum+=arr[i];
    }printf("%d\n",n-i);
    return 0; 
}
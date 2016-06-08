#include <iostream>
#include <cstdio>
#include <cstdlib>
#define gc getchar_unlocked
inline int fast(){int n=0;char ch=gc();while(ch<48)ch=gc();
while(ch>47){n=(n<<1)+(n<<3)+ch-48;ch=gc();}return n;}
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main(){
   	int n,k,i,j,m=0,t;
   	n=fast();k=fast();
   	int arr[n];
   	for(i=0;i<n;i++) arr[i]=fast();
   	qsort(arr,n,sizeof(int),compare);
   //for(i=0;i<n;i++) printf("%d ",arr[i] );
   	//printf("\n");
   for(i=0,j=1;j<n;){
   	t=arr[j]-arr[i];
   	  if(t<k) j++;
   	  else if(t==k){m++; i++;j++;}
   	  else 
         i++;
   }printf("%d\n",m);
   return 0;
}

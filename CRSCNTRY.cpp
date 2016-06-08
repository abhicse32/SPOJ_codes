#include <iostream>
#include <cstdio>
using namespace std;
int arr[2005][2005];
int arr_1[2005];
int arr_2[2005];
inline int fast(){
      int n=0; char ch=getchar_unlocked();
      while(ch<48)ch=getchar_unlocked();
      while(ch>47){
            n=(n<<1)+(n<<3)+(ch-48);ch=getchar_unlocked();
      }return n;
}
int DP(int*arr1,int*arr2,int m,int n){
	int i,j;
	for(i=0;i<=m;i++){
		for (j=0;j<=n;j++){
			if(i==0 || j==0) arr[i][j]=0;
			else if(arr1[i-1]==arr2[j-1])
				arr[i][j]=1+arr[i-1][j-1];
			else arr[i][j]=arr[i-1][j]>arr[i][j-1]? arr[i-1][j]:arr[i][j-1];
		}
	}
	return arr[m][n];
}
int main(){
    int i,j,k,t,max;
    t=fast();
    while(t--){
    	i=0;j=0;max=0;
    	while(arr_1[i++]=fast());
    	while(1){
    		 while(arr_2[j++]=fast());
             if((k=DP(arr_1,arr_2,i,j))>max)
             	max=k;
             j=0;
             arr_2[j++]=fast();
             if(arr_2[j-1]==0)break;
    	}
    	printf("%d\n",max);
    }
}
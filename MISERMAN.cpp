#include <iostream>
#include <cstdio>
#define gc getchar_unlocked
#define MAX__  999999
int arr[105][105];
inline int fast(){int n=0;char ch=gc();while(ch<48)ch=gc();
while(ch>47){n=(n<<1)+(n<<3)+ch-48;ch=gc();}return n;}
int min_(int m1,int m2,int m3){
	int min=m1;
	if(m2<min)min=m2;
	if(m3<min)min=m3;
	return min;
}
int main(){
	int N,M,i,j,k,min;
	N=fast();M=fast();
	for (i=0;i<N;i++)
		for (j=0;j<M;j++)
             arr[i][j]=fast();
     k=M-1;
    for(i=1;i<N;i++){
    	arr[i][0]+=min_(arr[i-1][0],arr[i-1][1],MAX__);
    	arr[i][M-1]+=min_(arr[i-1][M-2],arr[i-1][M-1],MAX__);
    	for(j=1;j<k;j++){
    		arr[i][j]+=min_(arr[i-1][j-1],arr[i-1][j],arr[i-1][j+1]);
    		//printf("%d ",arr[i][j] );
    	}
    	
    	}min=arr[N-1][0];
    	k=N-1;
    	for(i=0;i<M;i++)if(min>(N=arr[k][i]))min=N;
    		printf("%d\n",min);
    return 0;
}
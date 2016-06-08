#include <iostream>
#include <cstdio>
#define gc getchar_unlocked
int arr[2][1003];
inline int fast(){int n=0;
                char ch=gc();
                while(ch<48)ch=gc();
                        while(ch>47)
                        {n=(n<<1)+(n<<3)+ch-48;
                        ch=gc();}
                        return n;
                        }
int main(){
	int N,i,j,k;
	N=fast();
	for(i=0;i<N;i++){
		if(i>1)
        for (j=0;j<N;j++) k=fast();
        else
        	for(j=0;j<N;j++) arr[i][j]=fast();
	}if(N==2){ k=arr[0][1]/2;printf("%d %d\n",k,k);return 0;}k=(arr[0][1]+arr[0][2]-arr[1][2])/2;
  printf("%d ",k);
  for(j=1;j<N;j++) printf("%d ",(arr[0][j]-k));
  	printf("\n");
  return 0;
}

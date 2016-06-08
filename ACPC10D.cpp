#include <iostream>
#include <cstdio>
using namespace std;
int arr[3][100000];
#define MAX__ 10000000
inline int fast(){
	int n=0,flag=0;char ch=getchar_unlocked();
	while(ch<48){if(ch=='-'){ flag++;ch=getchar_unlocked();break;}
	                 ch=getchar_unlocked();}
	while(ch>47){
		n=(n<<1)+(n<<3)+ch-48;
		ch=getchar_unlocked();
	}return flag? n*-1 : n;
}
int min_(int a,int b,int c,int d){
	//return a<=b ? a<=c ? a <=d ? a : d : c<=d ? c :d : b<=c? b<=d ? b:d :c<=d ?c :d;
	int min=a;
	if(min>b) min=b;
	if(min>c) min=c;
	if(min>d) min=d;
	return min;
}

int main(){
     int N,i,j,k,l=1;
      int sum1,sum2,sum3;
      //cout << min_(2,4,-1892,-123) <<endl;
     N=fast();
     while(N>0){
     	 for(i=0;i<N;i++){
     	 	arr[2][i]=fast();
     	 	arr[1][i]=fast();
     	     arr[0][i]=fast();
     	}
     	 arr[0][0]+=arr[1][0];
     	 arr[2][0]=MAX__;
     for(int i=1;i<N;i++){
     	  arr[2][i]+=min_(arr[2][i-1],arr[1][i-1],MAX__,MAX__);
     	  arr[1][i]+=min_(arr[0][i-1],arr[1][i-1],arr[2][i-1],arr[2][i]);
     	  arr[0][i]+=min_(arr[0][i-1],arr[1][i-1],arr[1][i],MAX__);
     }
         printf("%d. %d\n",l++,arr[1][N-1]); 
         N=fast();
     }return 0;
}
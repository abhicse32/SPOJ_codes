#include <iostream>
#include <cstdio>
#include <cmath>
#define NUM_ 1000010
int arr[NUM_]={0};
using namespace std;
inline int fast(){
  int n=0; char ch=getchar_unlocked();
  while(ch<48)ch=getchar_unlocked();
  while(ch>47){
    n=(n<<1)+(n<<3)+ch-48;ch=getchar_unlocked();
  } 
  return n;
}
 void sieve(){
	int i=0,j,k;
	arr[0]=0;
	arr[1]=1;
	for(j=2;j<NUM_;j++){
		if(arr[j]==0){
	   arr[j]=j-1;
		for(k=j+j;k<NUM_;k+=j){ if(arr[k]==0)arr[k]=k;
			arr[k]=(arr[k]/j)*(j-1);}
	}
  }
}
int main(){
	sieve();
	int i,j,k,l,t,total,flag;
     t=fast();
     while(t--){
     	k=fast();
     	printf("%d\n",arr[k]);}return 0;
}
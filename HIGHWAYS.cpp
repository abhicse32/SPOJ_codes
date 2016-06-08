#include <iostream>
#include <cstdio>
using namespace std;
inline int fast(){
	int n=0;char ch=getchar_unlocked();
	while(ch<48) ch=getchar_unlocked();
	while(ch>47){
		n=(n<<1)+(n<<3)+ch-48;
		ch=getchar_unlocked();
	}return 0;
}
int **allocate(){
	 int ** arr= new int *[100001];
 for (int i=0;i<100001;i++)
 	arr[i]=new int[100001];
 return arr;
}
int main(){
 int T,n,m,start_city,end_city,i,j,k;
 T=fast();
int ** arr=allocate();
 while(T--){
     n=fast(),m=fast(),start_city=fast(),end_city=fast();
 }
 return 0;
}

#include <cstdio>
#include <cstdlib>
using namespace std;
#define MAX__ 10000000
int arr1[1010];
int arr2[1010];
inline int fast(){
	int n=0;char ch=getchar_unlocked();
	while(ch<48)ch=getchar_unlocked();
	while(ch>47){
		n=(n<<1)+(n<<3)+ch-48;
		ch=getchar_unlocked();
	}return n;
}

int main(){
   int T,i,j,N1,N2,tp,sh;
   T=fast();
   while(T--){
        sh=MAX__;
        N1=fast();
        for(i=0;i<N1;i++) arr1[i]=fast();
        N2=fast();
        for(i=0;i<N2;i++) arr2[i]=fast();
        for(i=0;i<N1;i++){
            for(j=0;j<N2;j++){
               tp=arr1[i]-arr2[j];
               tp=tp>0?tp:tp*-1;
               sh=sh>tp?tp:sh;
               if(sh==0)break;
            }
            if(sh==0) break;
        }  
        printf("%d\n",sh );
      }
return 0;
}
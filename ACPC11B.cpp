#include <cstdio>
using namespace std;
#define MAX__ 9999999
int arr1[1000010]={0};
int arr2[1000010]={0};
inline int fast(){
	int n=0;char ch=getchar_unlocked();
	while(ch<48)ch=getchar_unlocked();
	while(ch>47){
		n=(n<<1)+(n<<3)+ch-48;
		ch=getchar_unlocked();
	}return n;
}
int abs_(int a){
	return a>=0?a:a*-1;
}
int main(){
   int T,i,j,N1,N2,tp,sh=MAX__,p;
   int last1=0, last2=1000;
   int large,small;
   T=fast();
   while(T--){

        N1=fast();
        for(i=0;i<N1;i++) arr1[fast()]=1;
        N2=fast();
        for(i=0;i<N2;i++) arr2[fast()]=1;
        large=N1>=N2?N1:N2;
        small=N1<N2?N1:N2;
        for(i=0;i<N1 && arr1[i]!=1;i++);
         for(j=0;j<N2 && arr2[j]!=1;j++);
         last1=i;last2=j;
         sh=abs_(i-j);
         i=i<j ? i:j; 
        for(;i<small;i++){
          if(arr1[i]==1){
          	 last1=i; arr1[i]=0;
          }
          if(arr2[i]==1) {last2=i;arr2[i]=0;}
          if((p=abs_(last2-last1))<sh) sh=p;
          if(!sh) break;
          }
          if(sh!=0 && N1!=N2){
          	  if(large==N1){
          	  	p=i-last2;
                 while(i<N1 & p<sh){
                 	 if(arr1[i]) {last1=i;arr1[i]=0;
                 	 if((tp=abs_(last1-last2))< sh) sh=tp;}
                 	 p=i-last2;
                 }
          	  }else{
                 p=i-last1;
                 while(i<N2 && p<sh){
                 	if(arr2[i]){ last2=i; arr2[i]=0;
                 		if((tp=abs_(last1-last2))< sh) sh=tp;}
                 		p=i-last1;
                 	}
                 }

          	 }
          	 printf("%d\n",sh);
          }
    return 0;
}
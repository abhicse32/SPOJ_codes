#include <iostream>
#include <cstdio>
using namespace std;
long long  ***arr=new long long **[24];
long long ** allocate(){
	long long  **arr_=new long long *[2];
	arr_[0]=new long long [2];
	arr_[1]=new long long [2];
	return arr_;
}
long long  **mult(long long  **arr1,long long  **arr2,int M){
	    arr1=allocate();
	    long long  i,j,k;
	    cout << arr2[0][0] <<" "<<arr2[0][1] <<" " <<arr2[1][0] <<" " << arr2[1][1]<<endl;
        for( i=0;i<2;i++)
      	 for( k=0;k<2;k++){
      	 	  for(j=0;j<2;j++)
      	 	  	 arr1[i][k]+=arr2[i][j]*arr2[j][k];
      	 	  arr1[i][k]%=M;
      	 }
      	 	  
      	 	return arr1;
}
inline long long  fast(){
  long long  n=0; char ch=getchar_unlocked();
  while(ch<48)ch=getchar_unlocked();
  while(ch>47){
    n=(n<<1)+(n<<3)+ch-48;ch=getchar_unlocked();
  } 
  return n;
}
int main(){
   long long  T,N,M,i,j;
   arr[0]=allocate();
   arr[0][0][0]=1;arr[0][0][1]=1;arr[0][1][0]=1;arr[0][1][1]=0;
   for(i=1;i<24;i++) arr[i]=mult(arr[i],arr[i-1],1000000000);
   T=fast();
   while(T--){
   	 N=fast();M=fast();

   }
}
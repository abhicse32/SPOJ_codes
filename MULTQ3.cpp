#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main(){
     ios_base::sync_with_stdio(false);
     int N,Q,count;
     cin >> N >> Q;
     short arr[N],a,b,t;
     memset(arr,0,sizeof(short)*N);
     while(Q--){
     	cin >> t >>a >> b ;
     	if(t==0){
     		while(a <=b) arr[a++]+=1;
         }else{
         	count=0;
         	while(a<=b) { if(arr[a++]%3==0) count++;  }
         	cout << endl << count ;
         }
         //for(int i=0;i<N;i++) cout <<arr[i] <<" ";
          // cout <<endl;
     }
     cout << endl ;
     return 0;
}
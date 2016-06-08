#include <iostream>
#define S1 18411900
#define S2 1176000
#define S3 100030
using namespace std;int array[S1]={0};int p[S2];int t[S3][2];int main(){int i,j=2,k=1,l=0,tp1,tp2;p[0]=0;p[1]=1;
for(i=2;i<S1;i++){if(array[i]==0){p[j++]=i;tp1=p[k];tp2=p[k-1];if(tp1-tp2==2){t[l][0]=tp2;t[l++][1]=tp1;}k++;}
for(int tp=i+i;tp<S1;tp+=i)array[tp]=1;}cin>>k;while(k--){cin >> i;cout << t[i-1][0]<<" "<<t[i-1][1] <<endl;}return 0;
}
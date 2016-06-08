#include <iostream>
using namespace std;
#define MOD 1000000007
int main(){
      ios_base::sync_with_stdio(0);
     int T,N;
     long long sum,temp1,temp2,temp3,flag=0,temp4,pt=14;
     cin >> T;
     while(T--){
     	cin >> N;
     	if(N==1) cout << "1\n";
        else{
        	temp1=N+1;
            temp2=N+temp1;
            if(!(N%3)){N/=3;flag++;}
            else if(!(temp1%3)){temp1/=3;flag++;}
            else temp2/=3;

            temp1=(temp1*N)%MOD;
            if(flag) pt*=3;
            temp3=pt*temp1;
            temp4=(16*N)%MOD;
        	while(true){
            
        }
      }
  }
}
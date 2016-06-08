#include <iostream>
using namespace std;
int main(){
	int n,m,l,i,j,sum;
	cin >> n;
	short arr[10001];
	while(n!=-1){
		 sum =0;
         for(i=0;i<n;i++) {cin >> arr[i]; sum+=arr[i];}
         	if(sum%n==0){
         		sum/=n;
         		j=0;
              for(i=0;i<n;i++) if(arr[i]>sum) j+=arr[i]-sum; 
              	cout <<endl << j ;
         	}else cout <<endl <<"-1";
         	cin >> n; 
	}
	cout <<endl;
	return 0;
}
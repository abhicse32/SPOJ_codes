#include <iostream>
#include <string>
using namespace std;
int main(){
	int n,m,i,j,l;
	bool flag;
	cin >> n ;
	string str;
	int arr[127];
	while(n--){
		for(i=97;i<127;i++) arr[i]=0;
		cin >> m ;
		while(m-->=0){
			getline(cin,str);
			arr[str[0]]++;
			arr[str[str.length()-1]]--;
		}
		j=0;
		l=0;
		flag = false;
		for(i=97;i<123;i++){
          if(arr[i] <-1 || arr[i] >1){
          	flag=true;
          	break;
          }else if(arr[i]==1) j++;
          else if(arr[i]==-1) l++;
		}
		if(flag) cout <<"\nThe door cannot be opened.";
		else{
			if((j==0 && l==0) || (j==1 && l==1))
				cout <<"\nOrdering is possible.";
			else cout <<"\nThe door cannot be opened.";
		}
	}
	cout <<endl;
	return 0;
}

#include <iostream>
using namespace std;
int main(){
	int m,n,k;
	cin >> n;
	while(n--){
		cin >> m >>k;
		if(m-k!=2 && m!=k) cout <<"\nNo Number";
		else if(m%2==1) cout << endl<<m+k-1 ;
		else cout <<endl<<m+k;
	}
	cout <<endl;
}
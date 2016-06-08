#include <iostream>
using namespace std; 
int gcd_(int a,int b){
    if(b==0) return a;
    else if(a==0) return b;
    else return gcd_(b,a%b);
}
int main(){
	ios_base::sync_with_stdio(0);
	int n,a,b,c;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a >> b >>c;
		//cout << gcd_(a,b) <<endl;
		cout <<"case "<<i<<":";
		if(!(c%gcd_(a,b)))  cout<<" Yes";
		else cout <<" No";
		cout <<endl;
	}
	//cout <<endl;
	return 0;
}
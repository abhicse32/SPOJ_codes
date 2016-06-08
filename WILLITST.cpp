#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	long long num;
	cin >> num;
	while(!(num%2))num/=2;
	if(num>1) cout << "NIE" ;
	else cout <<"TAK";
	cout <<endl;
	return 0;
}
#include <iostream>
using namespace std;
main(){
	std::ios_base::sync_with_stdio(false);
	int n,m=0,i;
	cin >> n;
	while(n--){
		cin >> i;
		m^=i;
	}cout <<m<<endl;return 0;
}
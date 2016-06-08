#include <iostream>
#include <string>
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(false);
	int i,n;
	cin >> n;
	string str;
	while(n--){
		cin >> i >> str;
		str.erase(str.begin()+i-1);
		cout << endl <<i <<" "<<str ;
	}cout <<endl;
	return 0;
}

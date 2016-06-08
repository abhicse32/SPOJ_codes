#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin >> a;
	while(a-->0){
		cin >> b;
		bool flag=false;
		for(int i=1;i<=b;i++) {cin >> c; if(c>i-1)flag=true;}
			if(flag) cout <<"NO\n";
		   else cout<<"YES\n";
	}
	return 0;
}
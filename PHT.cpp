#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	long long x,t,c,temp1;
	cin >> t;
	int i=1;
	while(i<=t){
		cin >>x;
        c=(int)sqrt(x);
        
        if(c*(c+2)>x)c--;
        cout <<endl<<"Case "<<i<<": " <<c <<endl;
        i++;
	}
}
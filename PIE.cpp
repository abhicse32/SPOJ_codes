#include <iostream>
using namespace std;
#include <iomanip>
#define PIE 3.14159265358979323846264338327950
int main()
{
	int num,i,j,k,a,b;
    cin >> num;
    double vol;
    while(num--){
    	cin >> a >> b;
    	vol=0;
        for(i=0;i<a;i++) {cin>>k;vol+=k*k;}
        	vol*=PIE;
        cout << fixed;
        cout <<endl<< setprecision(4) <<vol/(b+1) ;

    }cout <<endl;
    return 0;
} 
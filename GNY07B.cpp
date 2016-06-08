#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	// Speed up cin
	std::ios_base::sync_with_stdio(false);
    int test,a,b,i;
    string str;
    cin >> test;
    for(i=1;i<=test;i++){
       cin >> a >>str;
       cout << fixed <<setprecision(4);
       if(str=="kg"){
          cout <<endl <<i <<" "<<a*2.2046 <<" lb" ;
       }else if(str=="lb"){
          cout <<endl <<i <<" "<<a*0.4536 <<" kg" ;
       }else if(str=="l"){
         cout <<endl<<i <<" " << a*0.2642 <<" g";

       }else if(str=="g"){
          cout <<endl <<i <<" "<<a*3.7854 <<" l";
       }
    }
    cout <<endl;
	
	return 0;
}
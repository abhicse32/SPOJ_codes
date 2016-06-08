#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
	std::ios_base::sync_with_stdio(false);
	long long k,n,l; string m; cin >> n; while(n--){ cin>> m >> k; l=m.length(); l=m[l-1]-48;
	if(k==0) cout <<endl <<"1"; else{ switch(l){ case 0: case 1: case 5: case 6: cout <<endl <<l ; break; 
case 4: case 9: if (k%2) cout << endl <<l; else cout << endl <<(l*l)%10; break;
case 2: case 3: case 7: case 8: k=(k-1)%4; if(k==0) cout << endl << l; else cout << endl <<int(pow(l,k+1))%10 ;break;
		}}}cout <<endl;
}
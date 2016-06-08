#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(0);
	int n;
	cin >>n;
	while(n){
		cout <<int(log(n)/log(2)) <<endl;
        cin >>n;
	}return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int year,pos,inversions=0,temp,temp2;
	cin >>year >>pos;
	
	while(1){
		if(year==0) break;
        temp2 =pow(2,year-1);
        if(year>=temp2)
        	pos=pos%temp2;
         else
        	inversions++;
        year--;
	}
	if(inversions%2) cout << "blue\n";
	else cout <<"blue\n";
	return 0;
}
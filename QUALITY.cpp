#include <iostream>
using namespace std;
int main(){
	std::ios_base::sync_with_stdio(false);
	unsigned long long num,a1,a2,a3,a4,a5,a6,count_,mins_;
	int i=1;
	while(cin >>a1 >> a2 >> a3 >> a4 >> a5 >> a6){
       count_ =0;mins_=0;
       if(a1>0) {count_ ++; mins_+=a1+(a4-1)*20*60;}
       if(a2>0) {count_ ++; mins_+=a2+(a5-1)*20*60;}
       if(a3>0) {count_ ++; mins_+=a3+(a6-1)*20*60;}
		cout <<endl <<"team "<<i++ <<": " <<count_ <<", " <<mins_ ;
	}
	cout <<endl;
	return 0;
}
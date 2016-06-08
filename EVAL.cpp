#include <iostream>
using namespace std;
int main(){
	long long denom=19,num=17,n=17,temp;
	while(true){
		temp=denom;
		denom=n*denom+num;
		num=(--n)*temp;

		if(n==0){num=temp*10;break;}
	}//cout <<num <<"  "<<denom <<endl;
	cout <<"2.";
    for(int i=0;i<1000000;i++){
        cout<<num/denom;
        num=(num%denom)*10;
    }
   return 0;
}
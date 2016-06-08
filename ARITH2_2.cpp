#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	long long t,res,num;
	char op;
	cin >>t;
	while(t--){
		cin>>res;
		while(1){
			cin >> op;
			if(op=='=')break;
			cin >>num;
			switch(op){
				case '+':
  		   res+=num;break;
  		case '*':
  		   res*=num;break;
  		case '-':
  		    res-=num;break;
  		case '/':
  		    res/=num;break;
  	  }
			}cout << res <<endl;
		} return 0;
	}



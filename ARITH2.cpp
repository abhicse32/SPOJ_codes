#include <iostream>
#include <cstdio>
using namespace std;
long long res=0,n=0;
inline long long  fast(){
   n=0;char ch=getchar_unlocked();
  char op;
  res=0;
  while(ch<48)ch=getchar_unlocked();
  while(ch>47){
    res=(res<<1)+(res<<3)+ch-48;ch=getchar_unlocked();
  }
  while(1){
  	op=getchar_unlocked();
  	if(op=='=')break;
  	n=0;
  while(ch<48)ch=getchar_unlocked();
  while(ch>47){
    n=(n<<1)+(n<<3)+ch-48;ch=getchar_unlocked();
  }
  	switch(op){
  		case '+':
  		   res+=n;break;
  		case '*':
  		   res*=n;break;
  		case '-':
  		    res-=n;break;
  		case '/':
  		    res/=n;break;
  	}
  }
  return res;
}
int main(){
     int n;
     cin >> n;
     while(n--)
             cout << fast()<<endl;
   return 0;
}
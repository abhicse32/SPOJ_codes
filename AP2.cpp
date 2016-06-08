#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	long long n,td,ltd,sum,a,d;
	int i,j,l,num;
    scanf("%d",&num);
    while(num--){
    	scanf("%lld%lld%lld",&td,&ltd,&sum);
        n=(2*sum)/(ltd+td);
        d=(ltd-td)/(n-5);
        a=td-(2*d);
        cout << n<<endl;
        for(i=0;i<n;i++) {cout << a <<" ";a+=d;}
        	cout <<	endl;
    }return 0;
}
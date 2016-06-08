#include <iostream> 
#include <iomanip>
using namespace std;int main(){int n,a;cin>>a;while(a--){cin >> n;n=n*(n+1);cout<<fixed<<setprecision(5)<<double(n/2)/(n+1)<<"\n";}return 0;}
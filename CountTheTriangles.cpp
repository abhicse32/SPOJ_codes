#include<iostream>
#include<string>
using namespace std;
int main()
{
     int n,i,level=0;
     cin >> n;
     unsigned long long sum;
     int *arr=new int [n];
     for(i=0;i<n;i++) cin >> arr[i];
     cout <<endl;
     for(i=0;i<n;i++){
       sum=0;
     level=arr[i];{
             sum=(level*(level+2)*(2*level+1))/8;//sum-level+(level-2)*3+1;
              cout <<sum <<endl;    
     return 0;
}

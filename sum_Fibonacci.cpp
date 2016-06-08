#include<iostream>
// correct but time limit exceeds........ needs to be modified
using namespace std;
int main(){
     int n;
     cin >> n;
     int i,j,k,l;
     const int divisor=1000000007;
     int *arr1=new int[n];
     unsigned long long sum=0;
     int *arr2=new int[n];
     int begin_fib,end_fib,fib1=0,fib2=1,next_fib;
     for(i=0;i<n;i++) cin >> arr1[i] >> arr2[i];
      cout <<endl;
      for(int i=0;i<n;i++){
           sum=0;
           for(j=0;j<arr1[i];j++){
               next_fib=fib1+fib2;
               fib1=fib2;
               fib2=next_fib%divisor;
           }
           //cout << fib2 << "  " << fib1<<endl;
           for(k=arr1[i];k<=arr2[i];k++){
           sum+=fib1;
           //cout << fib2 <<"  " <<sum <<"  " <<k <<endl;
               next_fib=fib1+fib2;
               fib1=fib2;
               fib2=next_fib%divisor;
           }
           fib1=0;fib2=1;
           cout <<sum <<endl <<endl;
      }
      
     return 0;
     
     
}

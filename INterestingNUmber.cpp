#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,temp,sum;
    cin >> n;
    int *ar=new int [n];
    for(i=0;i<n;i++)cin >> ar[i];
    for(i=0;i<n;i++){
      j=1;
      temp=ar[i];
      
         while(j){
             k=temp*j;
             sum=0;
             while(k){
                 sum+=k%10;
                 k/=10;
                  cout << sum <<endl;
             }if(sum==temp) {cout << temp*j <<endl;
              break;}
              j++;
         }
    }
}

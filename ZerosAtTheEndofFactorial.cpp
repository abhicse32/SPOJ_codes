#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int n,i,j,k,zeros,temp;
    cin>> n;
    int *arr=new int[n];
    for(i=0;i<n;i++) cin >> arr[i];
    cout <<endl;
    for(k=0;k<n;k++){
            temp=arr[k];
            zeros=0;
            
            j=1;while((i=temp/pow(5,j++)))
              zeros+=i;
            cout <<zeros<<endl;
     }
    
 return 0;
}

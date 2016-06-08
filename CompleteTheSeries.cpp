#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,l;
    cin >>n;
    int series_length,c_diff,a;
    unsigned long long  arr[n][3];//new unsigned long long *[n];
    for(i=0;i<n;i++) 
         cin>> arr[i][0] >>arr[i][1] >>arr[i][2];
    for(i=0;i<n;i++){
    j=arr[i][0];
    k=arr[i][1];
    l=arr[i][2];
        series_length=l%(j+k) ?2*(l/(j+k))+1 :2*(l/(j+k));
        c_diff=(k-j)/(series_length-5);
        a=j-2*c_diff;
         cout << series_length <<"  " <<c_diff <<" " <<a <<endl;
        for(j=0;j<series_length;j++) cout <<a+c_diff*j <<" ";
        cout <<endl;
    }
    return 0;
}

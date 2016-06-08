#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int *ar=new int[n];
    int i,j,k;
    for(int i=0;i<n;i++) cin >> ar[i];
    k=0;
    for(i=0;i<n;i++) k^=ar[i];
    cout <<endl<< k<<endl;
    return 0;
} // showing time limit exeeded

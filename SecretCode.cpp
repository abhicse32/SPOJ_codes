#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
     int n,i,j,k;
     cin >> n;
     int **arr=new int*[n];
     for(i=0;i<n;i++) {
        arr[i]=new int [4];
        for(j=0;j<4;j++) cin >> arr[i][j];
     }
}

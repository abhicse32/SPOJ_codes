#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
int main(){
    int n,i,l,k,temp,temp2,carry=0;
    cin>> n;
    int *arr=new int[n];
    for(i=0;i<n;i++) cin >> arr[i];
    cout <<endl;
    vector<int> *vect=new vector<int>[n];
    for(i=0;i<n;i++){
            temp=arr[i];
		while(temp>0){
			vect[i].push_back(temp%10);
			temp/=10;
		}
		temp=arr[i];
		while(temp>1)
		{
			--temp;
			l=vect[i].size();
			for(k=0;k<l;k++){
				temp2=vect[i][k]*temp+carry;
		   		vect[i][k]=temp2%10;
		   		carry=temp2/10;
			}
			while(carry>0){
				vect[i].push_back(carry%10);
				carry/=10;
			}
		}
    }
    for(i=0;i<n;i++){
          carry=vect[i].size()-1;
          for(;carry>=0;carry--)  cout << vect[i][carry];
          cout <<endl;
    }
 return 0;
}

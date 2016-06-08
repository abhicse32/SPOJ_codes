#include <iostream>
using namespace std;
int main(){
	int num,num_,thresh,i,j,k;
	std::ios_base::sync_with_stdio(false);
	cin >> num;
    int count;
	while(num--){
		cin >> num_ >> thresh ;
		count=0;
		while(num_--){
			cin >> j;
			if(j>=thresh) count++;
		}cout << endl <<count ;
	}cout <<endl;
	return 0;
}
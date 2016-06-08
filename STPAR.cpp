#include <iostream>
# include <stack>
# include <list>
using namespace std;
int arr[1001];
int main(){
	std::ios_base::sync_with_stdio(false);
	int num,i,j,x=1;
	cin >> num;
	stack<int> st;
	list <int> lst;
	lst.push_front(0);
	st.push(1010);
	while(num){
         for(i=0;i<num;i++) cin >> arr[i];
         for(i=0;i<num ;i++) {
         	if(arr[i]==x) st.push(arr[x++]);
         	else {

         	}
         }
	}

}
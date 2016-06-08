#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int main(){
	int num,x,y,i,j,source, dest;
	std::ios_base::sync_with_stdio(false);
	cin >> num;
	map <int,int>myMap;
	int arr[10005][3];
	while(num--){
	    vector<int>vect;
		cin >> x >> y;
		for(i=0;i<y;i++)
			cin >>arr[i][0] >> arr[i][1] >> arr[i][2];
		cin >> source >> dest;
		myMap.insert(pair<int,int>(source,0));
		vect.push_back(source);
		while(1){
           
		}
		//for()
		
	}
}

#include <iostream>
//# include <algorithm>
#include <cstring>
#include <list>
using namespace std;
int main(){
	  ios_base::sync_with_stdio(false);
      int num, i , j, k,l,m,node,length=0,count=0,level=0;
      cin >> num;
      int arr[num+1][num+1];
      memset(arr,0,sizeof(int)*(num+9)*(num+9));
      bool bool_array[num+1];
      memset(bool_array,false,sizeof(bool)*(num+1));
      int *leaf = new int[num+1];
      //cout << leaf[0] <<endl;
      for(i=0;i<num-1;i++){
      	cin >> j >> k;
        arr[j][k]=1; arr[k][j]=1;
        leaf[k]++;leaf[j]++;
      }
      //for(i=1;i<=num;i++){ for(j=1;j<=num;j++) cout <<arr[i][j] <<" "; cout <<endl;}
     // for(i=1;i<=num;i++)cout << leaf [i] <<" "; cout <<endl; 
      for(i=1;i<=num;i++) if(leaf[i]==1) {m=i; break;}
      	// << m <<endl;
     list<int> lst;
      lst.push_back(m);
      bool_array[m]=true;
      //lst.pop_front();
      //cout << lst.empty() <<endl;	
       while(1){
          node=lst.front();
           for(j=1;j<=num;j++) if(arr[node][j]==1 && !bool_array[j]) {
           	level++;lst.push_back(j); bool_array[j]=true;}
           	if(count==0 && level>0){
           		count=level;
           		level=0;
           		length++;
           	} count--;
           	lst.pop_front();
           	if(lst.empty()) break;
      }
      cout << endl << length<< endl;
      return 0;
}
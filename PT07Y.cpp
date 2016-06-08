#include <iostream>
//# include <algorithm>
#include <cstring>
#include <list>
using namespace std;
int main(){
	  ios_base::sync_with_stdio(false);
      int num,M, i , j, k,l,m,node,length=0,count=0,level=0;
      cin >> num >>M;
      int arr[num+9][num+9];
      memset(arr,0,sizeof(int)*(num+9)*(num+9));
      bool bool_array[num+1];
      bool popped_array[num+1];
      memset(bool_array,false,sizeof(bool)*(num+1));
      memset(popped_array,false,sizeof(bool)*(num+1));
      
      for(i=0;i<M;i++){
      	cin >> j >> k;
        arr[j][k]=1; arr[k][j]=1;
      }
      m=1;
      	// << m <<endl;
     list<int> lst;
      lst.push_back(m);
      bool_array[m]=true;
      //lst.pop_front();
      //cout << lst.empty() <<endl;	
       while(1){
          node=lst.front();
          length++;
          cout <<node <<endl;
           for(j=1;j<=num;j++) if(arr[node][j]==1) { if(popped_array[j] )break;
           	lst.push_back(j);}
           	lst.pop_front();
            popped_array[node]=true;
           	if(lst.empty()) break;
      }
      //cout << length <<endl;
      if(length==num) cout << endl <<"YES";
      else cout << endl <<"NO";
      cout <<endl;
      return 0;
}
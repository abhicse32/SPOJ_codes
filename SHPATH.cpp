#include <cstdio>
# include <iostream>
#include <string>
# include <map>
using namespace std;
 int arr[10005][10005];
inline int fast(){
      int n=0; char ch=getchar_unlocked();
      while(ch<48)ch=getchar_unlocked();
      while(ch>47){
            n=(n<<1)+(n<<3)+(ch-48);ch=getchar_unlocked();
      }return n;
}
inline string fast_str(){
      string str="";char ch=getchar_unlocked();
      while(ch<48)ch=getchar_unlocked();
      while(ch>47){
            str+=ch;ch=getchar_unlocked();
      }return str;
}
int main(){

      int no_cities,neighbors,city,weight,n,querries;
      int i,j,k,index1,index2;
      string city1,city2;
      map<string,int> str;
      n=fast();
      while(n--){
        no_cities=fast();
        for(i=1;i<=no_cities;i++){
            city1=fast_str();
            str.insert(pair<string,int>(city1,i));
        neighbors=fast();
          for(j=1;j<=neighbors;j++){
             city=fast();weight=fast();
             arr[i][city]=arr[city][i]=weight;
          }
  } querries=fast();
  while(querries--){
       city1=fast_str();city2=fast_str();
       int flag=0;
       for(j=1;j<=no_cities;j++) {if(str[j]==city)
       }
  }

      }for(i=1;i<=no_cities;i++)cout << str[i] <<" ";
      cout <<endl;
      for(i=1;i<=no_cities;i++)
      {
            for(j=1;j<=no_cities;j++) cout <<arr[i][j] <<" ";
                  cout <<endl;
      }
      return 0;
}



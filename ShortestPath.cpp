#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <vector>
using namespace std;
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

      int no_cities,neighbors,city,weight,n;
      int i,j,k;
      n=fast();
      string str[10001];
      int arr[10005][10005];
      while(n--){
        no_cities=fast();
        for(i=0;i<no_cities;i++){
            str[i]=fast_str();
        neighbors=fast();
          for(j=0;j<neighbors;j++){
             city=fast();weight=fast();
             arr[i][city]=arr[city][i]=weight;
          }
  }
      }for(i=0;i<no_cities;i++)cout << str[i] <<" ";
      cout <<endl;
      for(i=0;i<no_cities;i++)
      {
            for(j=0;j<no_cities;j++) cout <<arr[i][j] <<" ";
                  cout <<endl;
      }
      return 0;
}



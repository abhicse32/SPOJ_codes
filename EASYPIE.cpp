#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int arr[2005];
string code_str[]={"A","B","C","D","E","F","H","I"};
map<string,multimap<string,string> >*str=new map<string,multimap<string,string> >;
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
  int t,n,time_,i,j,k,dist_suc_sub;
  double avg_time,avg_submissions;
  string team_name,prob_code,result;
  t=fast();
  while(t--){
  	n=fast();
  	for(i=0;i<n;i++){
       time_=fast();team_name=fast_str();
       prob_code=fast_str();result=fast_str();
       arr[i]=time_;
     }
  }
}
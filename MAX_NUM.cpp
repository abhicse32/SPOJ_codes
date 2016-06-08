#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
using namespace std;
int arr[10];
int arr_[10];
std::vector<int> *vect;
typedef struct struct_ st;
struct struct_
{
    string s;
    int ct;
};
inline st fast(){
      char ch=getchar_unlocked();
      string str="";
      vect=new vector<int>[10];
      int count_=0;
      while(ch<48)ch=getchar_unlocked();
      while(ch>47){
           vect[ch-48].push_back(count_);
           count_++;
           str+=ch; ch=getchar_unlocked();
      }
      st strc;
      strc.ct=count_;
      strc.s=str;
      //cout << count_ <<endl;
      return strc;
}
inline int fast_(){
      char ch=getchar_unlocked();
      int n=0;
      while(ch<48)ch=getchar_unlocked();
      while(ch>47){
           n= (n<<1)+(n<<3)+ch-48;
           ch=getchar_unlocked();
      }
      return n;
}
int main(){
	int n,i,dig,temp,j,count,count_,last_index=0,vect_counter=0;
    int shorten_by=0,local;
	string str;
    cin >> n ;
    while(n--){
        cout <<endl;
        st src=fast();
        str=src.s;
        count_=src.ct;
        dig=fast_();
        
        if(count_<=dig) {cout <<"\n" ; continue;}
        last_index=0;
         shorten_by=0;
         local=0;
               for(i=9;i>=0;i--){
                vect_counter=0;
                  if((count=vect[i].size())>0){
                    //xcout << i <<" " <<count;
                    while(vect_counter<count){
                        temp=vect[i][vect_counter]-shorten_by;
                       // cout << " "<<temp <<" "<<last_index<<"  "<<dig <<endl;
                        local=temp-last_index;

                     if((dig >= local) && temp>=last_index){
                        str.replace(last_index,local,"");
                        //cout << str <<endl;
                        shorten_by+=local;
                        last_index+=1;
                        dig-=local;
                    }else if(local<0){vect_counter++; continue;}
                    else break;
                      vect_counter++;
                    }
                    if(dig<=0) break;
                }else continue;
                  }
                  if(dig>0 && last_index>=(temp=str.length()))
                    last_index=temp-dig;
                  str.replace(last_index,dig,"");
                 cout << str <<endl;
             }       
    return 0;
}
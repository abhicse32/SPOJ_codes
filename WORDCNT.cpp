#include<iostream>
#include<stdio.h>
#include<string>
#include<sstream>
using namespace std;

int main(){
    int N;
    string str,word;
    cin>>N;
    getline(cin,str);
    for(int i=0;i<N;i++){
        int sz=0,cnt=0,maxcnt=0;
        getline(cin,str);
        istringstream iss(str, istringstream::in);
        while(iss>>word){
            if(word.length()==sz) cnt++;
            else{
                sz=word.length();
                cnt=1;
            }
            if(cnt>maxcnt) maxcnt=cnt;
        }
        cout<<maxcnt<<endl;
    }
    return 0;
}/*
#include <iostream>
#include <cstdio>
using namespace std;
#define gc getchar_unlocked
int arr[1010]={0};
bool flag=false;
int count=0;
inline int fast(){
     flag=false;int n=0;
     char ch=gc();
     while(ch==' ') ch=gc();
     while(ch>96){
        n++; ch=gc();
     }if(ch=='\n'){ flag=true;} 
     return n;                                                                                                                                                                                                                
 } 
 int main(){
  int T,i,j,k;
  int max_=0;
  scanf("%d",&T);
  int x=fast();
  while(T--){
       while (1){
        arr[count]=fast();
           if(flag) break;
             count++;} k=0;max_=0;
            if(count){ k=1;  
            for( i=1;i<=count;i++){
              
                if(arr[i-1]==arr[i]) k++;
                  else{if(k>max_) max_=k;k=1;}
            }
        }
            if(k>max_) max_=k;
            printf("%d\n",max_);
            count=0;
  } return 0;
 }
*/                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
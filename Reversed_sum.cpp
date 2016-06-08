#include<iostream>
#include<string>
using namespace std;
int main(){
  int n,i,j,l,k,t,carry,res;
  cin >> n;
  string *str1=new string[n];
  string *str2=new string[n];
  char ch;
  for(i=0;i<n;i++)   cin >> str1[i] >> str2[i];
  for(i=0;i<n;i++) {
      l=str1[i].length();
      for(--l,j=0;l>j;l--,j++) {
      ch=str1[i][l];
      str1[i][l]=str1[i][j];
      str1[i][j]=ch;
      }
      l=str2[i].length(); j=0;
        for(--l,j=0;l>j;l--,j++){
        ch=str2[i][l];
          str2[i][l]=str2[i][j];
         str2[i][j]=ch;
        }
        //cout << str1[i] <<"  " <<str2[i] <<endl;
  }
  string str;
  for(i=0;i<n;i++){
      j=str1[i].length();
      k=str2[i].length();
      if(j<k){
         str=str1[i];
            str1[i]=str2[i];
            str2[i]=str;
            t=j;j=k;k=t;
      } carry=0; res=0;
      for(--j,--k;k>=0;k--,j--){
            res=(int)str1[i][j]+(int)str2[i][k]-96+carry;
           //cout <<res <<"  " ;
            carry=res/10;
            str1[i][j]=(char)(res%10+48);
      }while(carry>0 && j>=0){
             res=(int)str1[i][j]-48+carry;
             carry=res/10;

             str1[i][j--]=(char)(res%10+48);
             //cout << str1[i][j--] <<" " ;
       }
       if(carry) str1[i]="1"+str1[i];
       
  }
  cout <<endl;
       for(i=0;i<n;i++){
          l=str1[i].length();
          while(str1[i][--l]=='0');
          for(;l>=0;l--) cout << str1[i][l];
          cout <<endl;
       }
  return 0;
}

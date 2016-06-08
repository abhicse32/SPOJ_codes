#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string *str1=new string[n];
    string *str2=new string[n];
    bool sign[n];
    int i,j,k,l,m,res,carry,t,p;
    for(int i=0;i<n;i++) cin >> str1[i] >> str2[i];
     cout <<endl;
   string * str=new string[n];
    string str4;
   for(i=0;i<n;i++){
       
          p=str1[i].length();
          k=str2[i].length();l=k;
         // cout << j <<" " << k <<endl;
          t=0;
          str[i]="";
          for(--k;k>=0;k--){
           carry=0;
           str4=" ";
           int x=str[i].length();
           m=str2[i][k]-48;
           //cout << k<<"  " <<l <<endl;
               for(--x,j=p-1;j>=0;j--,x--)
               {
                 //cout << k<<"  " <<l <<" " <<m <<endl;
                 if(k<l-1 && x-t >=0){
                   res=(str[i][x-t]-48)+ (str1[i][j]-48)*m+carry;
                   str[i][x-t]=res%10+48;
                   //cout <<"I came here  " <<str[i] <<endl;
                 }else{
                      res= (str1[i][j]-48)*m+carry;
                   str4[0]=res%10+48;
                   str[i]=str4+str[i];
                   //cout <<"in the secon else " << str[i] <<endl;
                }
                carry=res/10;   
               }if(carry>0 ){ str4[0]=carry+48; str[i]=str4+str[i];}
               
            t++;
          }
         cout << str[i] <<endl;    
    }
   return 0;
 }



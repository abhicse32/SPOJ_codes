#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
     int n;
     cin >> n;
     string *str=new string[n];
     int i,carry=0;
     int j,k,l;
     for(i=0;i<n;i++) cin >> str[i];
      for(i=0;i<n;i++){
         l=str[i].length();
         k=l%2? l/2+1:l/2;
               for(j=l/2-1;j>=0;j--,k++)
                  if(str[i][j]!=str[i][k])
                  break;   
                  
                  if(j<0 || str[i][j] < str[i][k]){
                     j=l%2?l/2:l/2-1;
                       while(j>=0 && str[i][j]=='9')
                              str[i][j--]='0';
                             
                              if(j<0) str[i]="1"+str[i];
                              else 
                                  str[i][j]=(char)((int)str[i][j]+1);
                 }
                  
                 l=str[i].length();
                 l--;
               for(k=0;k<l;k++,l--)  str[i][l]=str[i][k];
               cout <<str[i] <<endl;
           }
     return 0;
}

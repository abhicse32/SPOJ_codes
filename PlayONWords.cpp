#include<iostream>
#include<cstdlib>
using namespace std; 

bool checkSeq(const string *str,int n){
        short beginArray[26],endArray[26];
        int i,temp1,temp2;
        for(i=0;i<26;i++) {
            beginArray[i]=0; endArray[i]=0;
        }
        for(i=0;i<n;i++){
        temp1=(int)str[i][0]-97;
        temp2=(int)str[i][str[i].length()-1]-97;
            beginArray[temp1]++;
            endArray[temp2]++;
            
        }
        temp2=0;temp1=0;
        for(i=0;i<26;i++){
             beginArray[i]-=endArray[i];
             if(beginArray[i]==-1)temp1++;
             else if(beginArray[i]==1) temp2++; 
         }
             if(temp1==1 && temp2==1) return true;
             else return false;
        
}
int main()
{
   int n,i,j;
   cin >> n;
   int arr[n];
   string **str=new string*[n];
   for(i=0;i<n;i++){
    cin >> arr[i];
     str[i]=new string[arr[i]];
      
         for(j=0;j<arr[i];j++){
             cin >>str[i][j];
         }
   }
   for(i=0;i<n;i++){
        if(checkSeq(str[i],arr[i])) cout <<"Ordering is possible.\n";
        else cout <<"The door cannot be opened.\n";
   }
   return 0;
}

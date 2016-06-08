#include<iostream>
#include<string>
#include<cctype>
#include<iomanip>
#include<vector>
using namespace std;
int main()
{
       int n,i,j,l,k;
       cin >> n;
       string *str=new string[n];
       for( i=0;i<n;i++) cin >> str[i];
       vector<int> *ar1=new vector<int>[n];
       vector<int>* ar2=new vector<int>[n];
      char *ch=new char [n+1];
      
       for(i=0;i<n;i++){
        l=str[i].length();
         j=0;
                     while(isdigit(str[i][j])) 
                      ar1[i].push_back((int)str[i][j++]-48);
                         
                 ch[i]=str[i][j];
            while(++j<l)  ar2[i].push_back((int)(str[i][j])-48);
       }
       int m,res,carry=0,l1,l2;
       cout <<endl;
       for(i=0;i<n;i++){
                  j=ar1[i].size();
                         k=ar2[i].size();
                       
                  if(ch[i]=='+' || ch[i]=='-'){      if(j<=k){
                          //cout << j <<" "<< k <<endl;
                          cout <<setw(k-j+2);
                          for(m=0;m<j;m++) cout <<ar1[i][m];
                          cout <<endl;
                          cout <<ch[i];
                          for(m=0;m<k;m++) cout <<ar2[i][m];
                          cout <<endl;
                        }else {
                           if(ch[i]=='+') cout <<" ";
                             for(m=0;m<j;m++) cout <<ar1[i][m];
                          cout <<endl;
                         ch[i]=='+'? cout <<setw(j-k+1):cout <<setw(j-k);
                          cout <<ch[i];
                          for(m=0;m<k;m++) cout <<ar2[i][m];
                          cout <<endl;
                        }
                        k--;j--;
                        l=j>=k?j:k;
                        l2=j<k?j:k;
                        l1=l;
                        for(m=0;m<=l+1;m++)  cout <<"-";
                        cout <<endl;
                        vector<int> vect=j>=k?ar1[i]:ar2[i];
                        vector<int> vect2=j<k?ar1[i]:ar2[i];
                        
                        
                        if(ch[i]=='+'){
                        for(;j>=0 && k>=0;j--,k--,l--){
                         res=ar1[i][j]+carry+ar2[i][k];
                         vect[l]=res%10;
                         carry=res/10;
                         }
                         while(carry!=0 && l>=0){
                         // cout << carry <<" " <<l <<endl;
                             res=vect[l]+carry;
                               vect[l--]=res%10;
                               carry=res/10;
                         }if(carry) cout <<carry;
                         else cout <<" ";
                         for(m=0;m<=l1;m++) cout << vect[m];
                         cout <<endl<<endl;
                         }
                         
                         else {
                            //bool flag;
                             if(j==k){
                                vect=ar1[i]; vect2=ar2[i];
                                l=l1=l2;}
                             
                               for(;l2>=0;l--,l2--){
                                  res= vect[l]-carry-vect2[l2];
                                  carry=0;
                                  if(res<0) {carry=1;
                                   res+=10;}
                                   vect[l]=res;
                                  
                         }
                         while(carry!=0 && l>=0){
                         // cout << carry <<" " <<l <<endl;
                             res=vect[l]-carry;
                             carry=0;
                             if(res<0) {
                               carry=1;
                               res+=10;
                               }
                               vect[l--]=res;
                         }
                         if(j<=k)cout <<" ";
                         for(m=0;m<=l1;m++) cout << vect[m];
                         cout <<endl<<endl;
                        
                       }
                         
              }else{
                           l=k+j;
                      cout << setw(k+1);
                       for(m=0;m<j;m++) cout <<ar1[i][m];
                          cout <<endl;
                          cout <<setw(j) <<ch[i];
                          for(m=0;m<k;m++) cout <<ar2[i][m];
                          cout <<endl;
                          --j;--k;
                          vector<int>vect1=ar1[i];
                          vector<int>vect2=ar2[i];
                          vector<int> *vect=new vector<int>[k+1];
                          l2=l;
                          m=k>=j ?k:j;
                          cout <<setw(j+k-m+1);
                          int v;
                          for(v=0;v<=m+1;v++) cout <<"-";
                          cout <<endl;
                         for(l1=0;k>=0;k--,l--,l1++){
                           carry=0;
                             
                                      for(m=j;m>=0;m--){
                                          res=vect2[k]*vect1[m]+carry;
                                          carry=res/10;
                                          vect[l1].push_back(res%10);
                                      }if(carry>0) vect[l1].push_back(carry);
                                      carry=vect[l1].size();
                                      cout << setw(l-carry+1);
                                         for(m=carry-1;m>=0;m--)  cout <<vect[l1][m];
                                         cout <<endl;
                         }if(ar2[i].size()>1){
                         for(m=0;m<l2;m++) cout <<"-";
                         cout <<endl;
                         int counter1,k=1;
                         for(m=0;m<l1-1;m++){
                               carry=0;
                                 l=vect[m].size();
                                 j=vect[m+1].size();
                                 //cout <<l <<"    "<< j <<endl;
                                 for(counter1=0;counter1<j ;counter1++){
                                       if(counter1+k<l){
                                            res=vect[m][counter1+k]+vect[m+1][counter1]+carry;
                                            vect[m][counter1+k]=res%10;
                                            }
                                       else{ res=vect[m+1][counter1]+carry;
                                              vect[m].push_back(res%10);
                                      }
                                      carry=res/10;
                                 }if(carry>0) vect[m].push_back(carry);
                                 vect[m+1]=vect[m];
                                 k++;
                         }
                         l=vect[l1-1].size();
                         cout << setw(l2-l+1);
                         for(m=l-1;m>=0;m--)cout << vect[l1-1][m] ;
                         cout <<endl <<endl;
                         }
                    }
                    
              }
       return 0;
}

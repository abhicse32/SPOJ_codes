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
    int i,j,k,l,m,res,carry,t;
    for(int i=0;i<n;i++) cin >> str1[i] >> str2[i];
    vector<short> *vect1=new vector<short>[n];
    vector<short>* vect2=new vector<short>[n];
    
    for(i=0;i<n;i++){
        j=str1[i].length();
        k=str2[i].length();
        for(--j;j>=0;j--) vect1[i].push_back(str1[i][j]-48);
        for(--k;k>=0;k--) vect2[i].push_back(str2[i][k]-48);
    }
    delete [] str1;
    delete [] str2;
     cout <<endl;
     vector<short>*vect3=new vector<short>[n];
   for(i=0;i<n;i++){
       
          j=vect1[i].size();
          k=vect2[i].size();
          t=0;
          
          for(l=0;l<k;l++){
           carry=0;
           int x=vect3[i].size();
               for(m=0;m<j;m++)
               {
                 if(l>0 &&  x>m+t){
                {
                   res=vect3[i][m+t]+ vect1[i][m]*vect2[i][l]+carry;
                   vect3[i][m+t]=res%10;}
                 }else {
                      res= vect1[i][m]*vect2[i][l]+carry;
                   vect3[i].push_back(res%10);
                }
                carry=res/10;   
               }if(carry>0 ) vect3[i].push_back(carry);
            t++;
          }
          for(m=vect3[i].size()-1;m>=0;m--) cout << vect3[i][m] ;
          cout <<endl;    
    }
    delete [] vect1;
    delete [] vect2;
    delete [] vect3;
}



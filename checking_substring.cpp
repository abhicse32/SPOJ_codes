#include<iostream>
#include<cstring>
using namespace std;
bool check(const char *, const char *);
int main(){
    char **array1=new char*[24];
    char ** array2=new char*[24];
    
    for(int i=0;i<24;i++){
        array1[i]=new char[11];
        array2[i]=new char[6];
        cin.get(array1[i],11).get();
        cin.get(array2[i],6).get();
     }
     for(int i=0;i<24;i++) {  if(check(array1[i],array2[i])) cout << "1" <<endl;
    else cout <<"0\n";
     }
     cout <<endl;
   return 0;
}
bool check(const char *ar1, const char *ar2){
       int i=0;
       while(i<7){
              if(ar1[i]==ar2[0] && ar1[i+1]==ar2[1] && ar1[i+2]== ar2[2] && ar1[i+3]==ar2[3] && ar1[i+4]== ar2[4]) return true ;
              i++;
        }
        return false;
}


#include<iostream>
#include<cstdlib>
#include<vector>
#include<cmath>
using namespace std;

struct limit{
     int lower;
     int upper;
};

void generatePrime(const limit& );
int main(){
      int n,i;
       cin >> n;
      limit *lim=new limit[n];
     
      for( i=0;i<n;i++)
          cin >>lim[i].lower >> lim[i].upper;
          
          for( i=0;i<n;i++) {
          cout <<endl;
          generatePrime(lim[i]);
           }
          return 0;
}
void generatePrime(const limit &lim){
        vector<int> arr;
        arr.push_back(2);
        int i=lim.lower;
        if(i==1) i++;
        int j=lim.upper;
        int k=(int)sqrt(j),t=0,f;
        for(int i=3;i<=k;i++) {
          for( f=0;f<=t;f++) if(!(i%arr[f])) break;
          if(f>t) {arr.push_back(i); t++;}
          }
        for(;i<=j;i++){
             for(f=0;f<=t;f++) if(!(i%arr[f]) && i!=arr[f]) break;
             if(f>t) cout <<i <<endl;
        }
        cout <<endl;
}


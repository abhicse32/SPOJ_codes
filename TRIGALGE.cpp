#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
  int num,i,j,k;
  int A,B,C;
  double guess;
  cin >> num ;
  while(num--){
  	cin >>A >> B >>C;
     guess =(C-B/2)/(A+1);
     int sin_sign=1;
	int cos_sign=1;
     for (i=1;i<11;i++){
           if(sin_sign%4!=1) sin_sign=-1;
           else sin_sign=1;
           if (cos_sign%4==0) cos_sign =-1;
           else cos_sign =1;
           if (i%2==1)
			guess = guess- (A*guess+B*sin(guess)-C)/(A+B*cos_sign*cos(guess));
		else
			guess = guess- (A*guess+B*sin(guess)-C)/(A+B*sin_sign*sin(guess));
     }
     cout << std::fixed <<std::setprecision(6) << guess <<endl; 
  }
}

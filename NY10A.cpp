#include <iostream>
#include <cstring>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	int n,i,ttt,tth,tht,thh,htt,hth,hht,hhh,x,y,z,t;
	string str;
	cin >>n;
	while(n--){
		ttt=0;tth=0;tht=0;thh=0;htt=0;hth=0;hht=0;hhh=0;
		cin >> t>>str;
       for(i=0;i<38;i++){
           x=str[i]=='H'?0:1;
           y=str[i+1]=='H'?0:1;
           z=str[i+2]=='H'?0:1;
           x=x*4+y*2+z*1;
           switch(x){
           	  case 0:
           	      hhh++; break;
           	  case 1:
           	      hht++; break;
           	  case 2:
           	      hth++; break;
           	  case 3:
           	      htt++; break;
           	  case 4:
           	      thh++; break;
           	  case 5:
           	       tht++;break;
           	   case 6: 
           	        tth++;break;
           	   case 7:
           	          ttt++;break;
           }
       }
       cout <<t<<" " <<ttt <<" " <<tth <<" " <<tht <<" " << thh <<" " <<htt <<" " <<hth <<" " <<hht <<" " <<hhh<<endl;
	}
	//cout <<endl;
	return 0;
}
#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;
int main(){
	std::ios_base::sync_with_stdio(false);
	string str;
	int i=0,len,flag;
	while(cin>>str){
        //len=str.lenght();
		i=0; flag=0;
		try{
		while(str[i]){
			if(str[i]=='_'){if(isupper(str[i+1])) {cout <<endl<<"Error!";flag++; break;}
			else if(islower(str[i+1])) str[i+1]=toupper(str[i+1]);
				str.erase(i,1);i++; 
		} else if(isupper(str[i])){
			if(!isalnum(str[i+1]) || !isalpha(str[i+1])) {cout <<endl <<"Error!";flag++;break;}
			else{
				str.insert(i,"_");
				str[i+1]=tolower(str[i+1]);
				i++;
			}
		} 
         i++;
		}
	}catch(exception e){};
	if(!flag) cout <<endl <<str;
	}
	return 0;
}
#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
using namespace std;
#define gc getchar_unlocked
short arr1[27];
short arr2[27];
inline char fast(short arr[27]){ char ch=gc();while(ch<97)ch=gc();
while(ch>96){ arr[ch-97]++;ch=gc();}return ch;}

int main(){
	int m,n,i,j;
	char ch;
	string str="";
    while(1){
    	str="";
    	ch=fast(arr1);
    	ch=fast(arr2);
    	for(i=0;i<26;i++){
    		m= arr1[i]>arr2[i] ? arr2[i]:arr1[i];
    		if(m>0)
    			while(m--)str+=char(i+97);

    	}
    	std::cout << str<<endl;
    	memset(arr1,0,27*4);
    	memset(arr2,0,27*4);
    	if(ch==EOF) break;
    }
}

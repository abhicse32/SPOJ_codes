#include <iostream>
#include <string>
using namespace std;
#define MAX_ 2000000//0000
string str_str[MAX_];
string sub(string &str1,string &str2,int len1,int len2){
         int i,j,carry=0,temp;
         string str="";
         for(i=len1,j=len2;j>=0;i--,j--){
         	 temp=str1[i]-str2[j]-carry;
         	 carry=0;
         	 if(temp<0){
         	 	  carry=1;
         	 	  temp+=10;
         	 }
         	 str=char(temp+48)+str;
         }for(;i>=0;i--){
         	 temp=str1[i]-carry;
         	 carry=0;
         	 if(temp<48){
         	 	carry=1;
         	 	temp+=10;
         	 }
         	 str=char(temp)+str;
         }return str;
}
long long convert(string str){
	size_t len=str.length();
	long long num=0;
    for (int i = 0; i < len; ++i)
           num=num*10+str[i]-48;
    return num;
}
bool palindrome(string str){
       size_t len=str.length()-1;
       size_t i=0;
       while(i<=len && str[len]==str[i++])len--;
       return i<len?false:true;
}
void make_pali(){
	string str="1";
	int i,j,k;
	bool flag;
	size_t len=str.length();
	size_t len2=len/2,pt=len%2;
	for(i=0;i<MAX_;i++){
		flag=false;
		str_str[i]=str;
		switch(pt){
                case 0:
                   if(str[len2]!='9')
                   	  str[len2]=str[len2+1]=str[len2]+1;
                   else{
                          str[len2]=str[len2+1]='0';
                    	j=len2-1;k=len2+2;
                         
                          while(j>=0 && str[j]=='9'){
                             str[j]=str[k]='0';
                             j--;k++;
                    	  }if(j>=0){
                            str[j]=str[k]=str[j]+1;
                    	  }else{
                    	  	 str='1'+str;
                    	  	 str[k]='1';
                    	  	 len++;
                    	    pt=len%2;
                    	   len2++; 
                    	 
                    	 } 
                     }
                     break;
             case 1:
               if(str[len2]!='9')
                    str[len2]=str[len2]+1;

                 else{
                    	str[len2]='0';
                    	j=len2-1;k=len2+1;
                         while(j>=0 && str[j]=='9'){
                             str[j]=str[k]='0';
                             j--;k++;
                    	  }if(j>=0){
                            str[j]=str[k]=str[j]+1;
                    	  }else{
                    	  	 str='1'+str;
                    	  	 str[k]='1';
                    	  	 len++;
                    	    pt=len%2; 
                    	 } 
                    }
                break;
                default :
                            break;
               }    
           }
       	}
int main(){
	ios_base::sync_with_stdio(false);
	string str1,str2,str3;
	int T,i,j,count;
	long int num;
	cin >> T;
	make_pali();
	for(i=0;i<MAX_;i++) cout << str_str[i] <<endl;
	/*while(T--){
		cin >>str1;
		count=0;
		str2="1";
       num=convert(str1)/2+1;
       for(i=0;i<num;i++){
            
       }
	}*/
       return 0;
}
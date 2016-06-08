#include <iostream>
#include <cstdio>
#include <string.h>
int main(){
     char str1[110],str2[110];
     char ch; long long num1,num2,res;
     int i,j,k,l;
     char str_[110],str__[110];
     while((scanf("%s %c %s",str1,&ch,str2))!=EOF){
          num1=0;num2=0;
          for(i=0;str1[i]!='\0';++i){
              k=int(str1[i])-48;
              l=int(str1[++i])-48;
              //printf("%d %d\n",l,k );
              while(k>0){
              	 num1=num1*10+l;
              	 //printf("%lld\n",num1 );
              	 k--;
              }
          }for(i=0;i<str2[i]!='\0';++i){
                k=int(str2[i])-48; l=int(str2[++i])-48;
                while(k>0){
                	 num2=num2*10+l;
                	 k--;
                }
          }
          switch(ch){
          	 case '+':
          	     res= num1+num2;
          	     break;
          	 case '-':
          	      res=num1-num2;
          	      break;
          	 case '*':
          	     res =num1*num2;
          	     break;
          	 case '/':
          	     res= num1/num2;
          	     break;
          	  default :
          	      break;
          }
   printf("%s %c %s = ",str1,ch,str2);
   i=0;j=0;
   if(res==0) str_[i++]=48;
   else{
   while(res>0){
   	 str_[i++]=char(res%10+48);
   	 res/=10;
   }
}
   ch=str_[i-1];j=1;
   for(k=i-2,l=0;k>=0;k--){
       if(str_[k]==ch && j<9)j++;
       else{
       	  str__[l++]=char(48+j);str__[l++]=ch;
       	  j=1;ch=str_[k];
       }
   }
   str__[l++]=char(j+48);str__[l++]=ch;
     for(i=0;i<l;i++) printf("%c",str__[i]);
     printf("\n");
 }return 0;
}
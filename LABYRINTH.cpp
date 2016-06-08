#include <cstdio>
#include <iostream>
using namespace std;
#define dim 1005
#define gc getchar_unlocked
char arr[dim][dim];
int m,n;
int dir[2];
int max(int a,int b,int c,int d){
	int max=a;
	if(max<b)max=b;
	if(max<c)max=c;
	if(max<d)max=d;
	return max;
}
int max_ret(int i,int j){
	   if(i<0 || i>m || j<0 || j>n || arr[i][j]=='#') return 0;
	   else{
	   	  //arr[i][j]='#';
	   	  int a=1+max_ret(i-1,j);
	   	  int b=1+max_ret(i+1,j);
	   	  int c=1+max_ret(i,j-1);
	   	  int d=1+max_ret(i,j+1);
	   	  return max(a,b,c,d);	
	}
}
void pair_max(int a,int b,int c,int d){
	dir[1]=dir[0]=0;
	  if(dir[0]<a){if(dir[1]<a){dir[0]=dir[1];dir[1]=a;}else dir[0]=a;} 
	  if(dir[0]<b){if(dir[1]<b){dir[0]=dir[1];dir[1]=b;}else dir[0]=b;}
	  if(dir[0]<c) {if(dir[1]<c){dir[0]=dir[1];dir[1]=c;}else dir[0]=c;}
	  if(dir[0]<d){if(dir[1]<d){dir[0]=dir[1];dir[1]=d;}else dir[0]=d;}
}
int main(){
     int T,i,j,max,k,a,b,c,d;
     char ch;
     scanf("%d",&T);
     while(T--){
     	  scanf("%d%d",&m,&n);
     	  ch=gc();
     	  max=0;
     	  for(i=0;i<m;i++){
     	  	j=0;
               while((ch=gc())!='\n') arr[i][j++]=ch;
     	  }m--;n--;
     	    for(i=0;i<=m;i++){
     	    	for(j=0;j<=n;j++){
                   if(arr[i][j]=='.'){
                   	//arr[i][j]='#';
                   	 a=0;b=0;c=0;d=0;
                   	 if(i-1>=0){a=max_ret(i-1,j);}
                   	 if(i+1<=m)b=max_ret(i+1,j);
                   	 if(j-1>=0)c=max_ret(i,j-1);
                   	 if(j+1<=n)d=max_ret(i,j+1);
                   	 printf("%d %d %d %d\n",a,b,c,d );
                   	pair_max(a,b,c,d);
                   	k=dir[1]+dir[0];
                   	if(max<k)max=k;
                   }
                  }	
     	    }printf("Maximum rope length is %d.\n",max);
   }
}
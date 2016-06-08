#include <cstdio>
#define S 1299800
int a[S]={0},c[100010];int main(){int i,j=1,k;for(i=2;i<S;i++){if(a[i]==0){c[j++]=i;for(k=i+i;k<S;k+=i)a[k]=1;}}while(1){
scanf("%d",&k);printf("%d\n",c[k]);}return 0;}
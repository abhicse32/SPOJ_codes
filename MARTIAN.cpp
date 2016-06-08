#include <cstdio>
#define gc getchar_unlocked
int mat1[505][505];
int mat2[505][505];
int temp1[505][505];
int temp2[505][505];
inline int fast(){int n=0;char ch=gc();while(ch<48)ch=gc();
while(ch>47){n=(n<<1)+(n<<3)+ch-48;ch=gc();}return n;}

int main(){
	int m,n,i,j,sum=0;
	int *ptr11,*ptr12,*ptr13,*ptr21,*ptr22;
	n=fast();m=fast();
	while(n && m){
         for(i=1;i<=n;i++){
         	ptr11=mat1[i];
         	for(j=1;j<=m;j++){
         		  ptr11[j]=ptr11[j-1]+fast();
         	}
         } 
          for(i=1;i<=n;i++){
          	ptr11=mat2[i];
          	ptr12=mat2[i-1];
         	for(j=1;j<=m;j++){
                 ptr11[j]=ptr12[j]+fast();
         	}
         }
         for(i=1;i<=n;i++){
         	ptr11=mat1[i];
         	ptr12=temp1[i];
         	ptr13=temp1[i-1];
         	ptr21=mat2[i];
         	ptr22=temp2[i];
         	for(j=1;j<=m;j++){
         		if(ptr11[j]>ptr13[j])
         			ptr12[j]=ptr11[j];
         		else
         			ptr12[j]=ptr13[j];
         		 if(ptr21[j] > ptr22[j-1])
         		 	ptr22[j]=ptr21[j];
         		 else ptr22[j]=ptr22[j-1];
                   	}
         } sum=0;
         	for(j=m,i=n;j>0 && i>0;){
         		if(temp1[i][j]>temp2[i][j])){
                   sum+=mat1[i][j];i--;
                }else if(temp1[i][j] <temp2[i][j]){
                	sum+=mat2[i][j];j--;
                }else{
                	if(mat1[i][j]>mat2[i][j]){
                		sum+=mat1[i][j];i--;}
                	else{
                	}
                	}
                }
                
         	}
         }
         /*for(i=1;i<=n;i++){
         	for(j=1;j<=m;j++)
         		printf("%d ",temp1[i][j]);
         	printf("\n");
         } printf("\n");
         for(i=1;i<=n;i++){
         	for(j=1;j<=m;j++)
         		printf("%d ",temp2[i][j]);
         	printf("\n");
         }*/
         n=fast();m=fast();
	}
	return 0;
}

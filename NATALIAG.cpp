#include <iostream>
#include <cstdio>
#define gc getchar_unlocked
#define MAX_ 9999999
char arr[110][110];
int M,N,len;
typedef struct Queue q_;
struct Queue{
	int a;
	int b;
	q_*link;
};
q_* initialize(int a_,int b_){
	q_ *temp=new q_;
	temp->a=a_;
	temp->b=b_;
	temp->link=NULL;
	return temp;
}
q_ *queue_add(q_* myq, int a , int b){
	q_ *tmp=initialize(a,b);
	q_ * temp1=myq;
	if(myq==NULL)myq=tmp;
	else{
       while(temp1->link!=NULL)
       	 temp1=temp1->link;
       temp1->link=tmp;
	}return myq;
}
q_*delete_top(q_* myq){
    if(myq!=NULL){
    	q_ *temp=myq;
    	myq=temp->link;
    	delete temp;
    }
    return myq;
}
int len_(q_ *myq){
   int len;
   q_ *tmp=myq;
   for(len=0;tmp->link!=NULL;len++);
   	return len;
}
int main(){
    int i,j,temp1,temp2;
    int T;
    scanf("%d",&T);
    while(T--){
    scanf("%d%d",&M,&N);
    char ch=gc();
    for(i=0;i<M;i++){
    	j=0;
    	while((ch=gc())!='\n'){ arr[i][j]=ch;if(ch=='$'){temp1=i;temp2=j;}j++;
    }
}
  /*for(i=0;i<M;i++){
  	  for(j=0;j<N;j++) printf("%c",arr[i][j]);
  	  	printf("\n");
  }*/
    len=0;
    int a,b,c,d,level=0;
    q_ *queue=NULL;
    queue=queue_add(queue,temp1,temp2);
    i=temp1;j=temp2;
    int queue_len=0,prev_level=0;
     while(arr[i][j]!='#'){
         a=i-1;b=i+1;c=j-1;d=j+1;
         printf("%d %d %d %d\n",a,b,c,d );
         if(a>=0 && arr[a][j]=='O'){queue=queue_add(queue,a,j);arr[a][j]='*';queue_len++;printf("%d a\n", queue_len);}
         if(b<M && arr[b][j]=='O'){queue=queue_add(queue,b,j);arr[b][j]='*';queue_len++;printf("%d b\n", queue_len);}
         if(c>=0 && arr[i][c]=='O'){queue=queue_add(queue,i,c);arr[i][c]='*';queue_len++;printf("%d c\n", queue_len);}
         if(d<N && arr[i][d]=='O'){queue=queue_add(queue,i,d);arr[i][d]='*';queue_len++;printf("%d d\n", queue_len);}
         queue=delete_top(queue);
         if(level==0){
         	level=queue_len;
         	len++;
         }
         else {level--;queue_len--;}
            if(queue==NULL) {len=-1;break;}
         	i=queue->a;
            j=queue->b;
            printf("%d %d\n",i,j);
         //printf("aahshka\n");
         
     } printf("%d\n",len);
}
return 0;

}
#include <cstdio>
#define gc getchar_unlocked
inline int fast(){int n=0;char ch=gc();while(ch<48)ch=gc();
while(ch>47){n=(n<<1)+(n<<3)+ch-48;ch=gc();}return n;}
int main(){
	int N,i,j;
	N=fast();
	while(N--){
		i=fast();j=fast();
	if(i<=j){
     if(i%2==1) printf("R\n");
     else  printf("L\n");
	}else{
		if(j%2==1)
		printf("D\n");
      else
		printf("U\n");
}
	}return 0;
}

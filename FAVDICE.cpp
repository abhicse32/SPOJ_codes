#include <iostream>
#include <cstdio>
#include <cstdlib>
#define gc getchar_unlocked
inline int fast(){int n=0;char ch=gc();while(ch<48)ch=gc();
while(ch>47){n=(n<<1)+(n<<3)+ch-48;ch=gc();}return n;}
int main(){
	int n,m,i,j;
	double sum;
	n=fast();
	while(n--){
		sum=0;
		m=fast();
		for(i=1;i<=m;i++)sum+=1.0/i;
			printf("%.2lf\n",sum*m);
	}return 0;
}

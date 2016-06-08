#include <cstdio>
#define gc getchar_unlocked
inline int fast(){int n=0;char ch=gc();while(ch<48)ch=gc();
while(ch>47){n=(n<<1)+(n<<3)+ch-48;ch=gc();}return n;}
int main(){
	int T,i,j,k;
	T=fast();
	double sum=0,lm=3.0/4;
	while(T--){
		k=fast();
		sum=lm + (1.0/(2.0*(k+2)) - 1.0/(2.0*(k+1)));
			printf("%.11lf\n",sum);
	} return 0;
}
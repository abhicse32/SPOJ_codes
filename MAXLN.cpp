#include <stdio.h>
inline long long fast(){
	long long  n=0;
	char ch=getchar_unlocked();
	while(ch<48)ch=getchar_unlocked();
	while(ch>47){
		n=(n<<3)+(n<<1)+ch-48;
		ch=getchar_unlocked();
	}return n;
}
int main(){
	long long r;
	int T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++){
       r=fast();
       printf("Case %d: %.2lf\n",i,(.25+4*r*r));
    }return 0;
}
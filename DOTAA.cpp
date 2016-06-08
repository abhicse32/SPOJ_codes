#include <cstdio>
#define gc getchar_unlocked
inline int fast(){int n=0;char ch=gc();while(ch<48)ch=gc();
while(ch>47){n=(n<<1)+(n<<3)+ch-48;ch=gc();}return n;}
int main(){
 int N,i,j,k,p,q,r;
 N=fast();
 while(N--){
    p=fast();q=fast();r=fast();
    j=0;k=0;
    for(i=0;i<p;i++){j+=fast()/r;k++;}
    	if(j>=p && k%q==0) printf("YES\n");
    else 
    	printf("NO\n");
 }return 0;
}
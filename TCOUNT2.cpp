#include <cstdio>
#define gc getchar_unlocked 
inline int fast(){ int n=0;char ch=gc(); while(ch<48)ch=gc();while(ch>47){ n=(n<<1)+(n<<3)+ch-48;
ch=gc();}return n;} int main(){ int T; long double N; T=fast(); while(T--){ N=fast();
printf("%.0Lf\n",(N/2.0)*(7*N*N+4.5*N+1));}return 0; }
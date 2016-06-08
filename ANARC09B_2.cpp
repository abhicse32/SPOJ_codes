#include <cstdio>
#include <cmath>
#define gc getchar_unlocked
inline long long fast(){long long n=0;char ch=gc();while(ch<48)ch=gc();
while(ch>47){n=(n<<1)+(n<<3)+ch-48;ch=gc();}return n;}

int gcd(int a,int b){
    if(a==0)return b;
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
      long long A,B,i,j;
      long long lcm;
      A=fast();B=fast();
      while(A>0 && B>0){
        lcm=A*B;i=gcd(A,B);
        lcm=lcm/i;
          printf("%lld\n",lcm/i);
          A=fast();B=fast();
      } return 0;
}
#include <cstdio>
#include <cmath>
#define max_ 1000100 
#define max2 78505
#define gc getchar_unlocked
bool arr1[max_];
int arr[max2];
int factors1[10];
int factors2[10];
short count1[10];
short count2[10];
inline int fast(){int n=0;char ch=gc();while(ch<48)ch=gc();
while(ch>47){n=(n<<1)+(n<<3)+ch-48;ch=gc();}return n;}
void make_prime(){
    int i,j,k;
      for(i=2,j=0;i<max_;i++){
        if(!arr1[i]){ arr[j++]=i;
        for(k=i+i;k<max_;k+=i)arr1[k]=true;
      }
     }
}
long long LCM(int A,int B){
      int i=0,j,a,k;
      bool flag=false;
      a=arr[i];j=0;
      while(A>1){
         if(A%a==0){
            A/=a; flag=true;
            count1[j]++;
         }else{
            if(flag){factors1[j++]=a;}
             a=arr[++i]; flag=false;
         }
      }
      factors1[j++]=a;
      i=0;a=arr[i];k=0; flag=false;
      while(B>1){
         if(B%a==0){
            B/=a; flag=true;
            count2[k]++;
         }else{
            if(flag){factors2[k++]=a;}
             a=arr[++i]; flag=false;
         }
      }
      factors2[k++]=a;
      k=k>j?k:j;
    long long lcm=1;
    for(i=0;i<=k;i++){
        if(factors1[i]!=factors2[i]){
            lcm*=(pow(factors1[i],count1[i])*pow(factors2[i],count2[i]));
            factors2[i]=count1[i]=count2[i]=factors1[i]=0;
        }
        else {lcm*=pow(factors1[i],count2[i]>count1[i]?count2[i]:count1[i]);
            factors2[i]=count1[i]=count2[i]=factors1[i]=0;
        }
    }return lcm;
}
int gcd(int a,int b){
    if(a==0)return b;
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
       make_prime();
       //for(int i=0;i<100;i++)printf("%d\n",arr[i]);
      int A,B,i;
      A=fast();B=fast();
      while(A>0 && B>0){
          printf("%lld\n",LCM(A,B)/gcd(A,B));
          A=fast();B=fast();
      } return 0;
}
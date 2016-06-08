#include <cstdio>
#include <cstring>
#define gc getchar_unlocked
#define max_ 1000100 
#define max2 78505
bool arr1[max_];
int arr[max2];
int primes2[max2];
int primes[max2];
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
int main(){
   make_prime();
   int A,B,i,j,a,t=1;
    int k,dist;
    A=fast();B=fast();
   //for(i=0;i<max2;i++) printf("%d\n",arr[i]);
    while(A>0 && B>0){
        i=0;j=0;
        //printf("hkjh\n");
        a=arr[i];
        while(A>1){
             if(A%a==0){
                A/=a;
                primes[j]++;
                //printf("abhishek %d\n",i);
             }else{
                ++j;a=arr[++i];
             }
             //printf("126371\n");
         }
            i=0;k=0;a=arr[i];
        while(B>1){
            if(B%a==0){
                B/=a;
                primes2[k]++;
               // printf("aman\n");
            }else{
                ++k;a=arr[++i];
        }
        } 
        k=k>j?k:j; dist=0;a=0;
        //for(i=0;i<=k;i++)printf("%d %d\n",primes[i],primes2[i]);
        for(i=0;i<=k;i++){
             if(primes[i]>0 || primes2[i]>0){
                    A=primes2[i]-primes[i];
                    primes[i]=0;primes2[i]=0;
                    dist+=A>0?A:A*-1;
                    a++;
             }
        }
        printf("%d. %d:%d\n",t++,a,dist);
        A=fast();B=fast();
    }
}
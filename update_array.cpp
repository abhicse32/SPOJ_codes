#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int arr[10005];
int temp_arr[10002];
inline int fast(){
  int n=0; char ch=getchar_unlocked();
  while(ch<48)ch=getchar_unlocked();
  while(ch>47){
    n=(n<<1)+(n<<3)+ch-48;ch=getchar_unlocked();
  } 
  return n;
}
int main(){
       //ios_base::sync_with_stdio(0);
      int num,l,r,val,n,u,q,index;
       //cin >> num;
      //scanf("%d",&num);
      num=fast();
       while(num--){
           //scanf("%d%d",&n,&u);//cin >> n >> u;
            n=fast();u=fast();
           memset(temp_arr,0,sizeof(int)*n);
           while(u--){
             //scanf("%d%d%d",&l,&r,&val);//cin >>l >> r >> val;
             l=fast();r=fast();val=fast();
             temp_arr[l]+=val;
             temp_arr[r+1]-=val;
           }
           q=0;
           for(r=0;r<n;r++){
             q+=temp_arr[r];
             arr[r]=q;
           }
           //scanf("%d",&q);//cin >> q;
           q=fast();
         while(q--){
          //cin >>index;
          //scanf("%d",&index);
          index=fast();
          printf("%d\n",arr[index]); 
         }
       }
       return 0;
}
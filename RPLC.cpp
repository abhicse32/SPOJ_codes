#include <cstdio>
int main(){
 //   ios_base::sync_with_stdio(0);
	int num,i;
    int x,y;
	long long last_neg_sum,total_sum=0;
	scanf("%d",&num);
	for(int k=1;k<=num;k++){
	last_neg_sum=1;
	total_sum=0;
	scanf("%d",&x);
		for(i=0;i<x;i++){
			scanf("%d",&y);
           total_sum+=y;
           if(total_sum<0 && total_sum<last_neg_sum)
           	last_neg_sum=total_sum;
          }
		if(last_neg_sum<0)
		last_neg_sum=-1*(last_neg_sum-1);
		printf("Scenario #%d: %lld\n",k,last_neg_sum);
	}
	return 0;
}
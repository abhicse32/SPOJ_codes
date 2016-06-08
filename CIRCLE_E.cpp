#include <cstdio>
#include <cmath>
int main(){
	int T;
	double r1,r2,r3,res,k1,k2,k3;
	scanf("%d",&T);
	while(T--){
		scanf("%lf%lf%lf",&r1,&r2,&r3);
		k1=1/r1;k2=1/r2;k3=1/r3;
		printf("%.6lf\n\n",1/(k1+k2+k3+2*sqrt(k1*k2+k2*k3+k3*k1)));
	}return 0;
}

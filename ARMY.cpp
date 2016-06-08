#include <iostream>
# include <cstdlib>
using namespace std;
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main()
{
	ios_base::sync_with_stdio(0);
	long long  n,NM,NG;
	long long  i,j,k,temp1=0,temp2=0;
	int * arr_NG,*arr_NM;
	cin >> n;
	while(n--){
		temp1= -27384924;
		temp2= temp1;
	   cin >>NG >> NM;
       arr_NG=new int[NG];
       arr_NM=new int[NM];
	   for(i=0;i<NG;i++) {cin >>j; if(j>temp1) temp1=j;}
	   for (i=0;i<NM;i++) {cin >>j; if(j>temp2) temp2=j;}
	   	//cout << temp1 <<" " <<temp2 <<endl;
        if(temp1>=temp2)
          cout <<"Godzilla\n";
       else if(temp2>temp1)cout <<"MechaGodzilla\n";
       else cout <<"uncertain\n";
   }
 return 0;
}
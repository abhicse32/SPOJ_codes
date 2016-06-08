#include <iostream>
# include <cmath>
#define SIZE 522
using namespace std;

int bin_search(double *array,double c,int low, int high){
    if(low>=high) return high+1;
    else{
    	int mid=(low+high)/2;
    	if(array[mid]<=c) return bin_search(array,c,mid,high);
    	
    	else return bin_search(array,c,low,mid-1); 
    }
}
int main()
{
	double array[SIZE];
	int i,j,c,low,high,num=1;
	array[0]=1.0/2;
	for(i=1,j=3;i<SIZE;i++,j++)array[i]=1.0/j+array[i-1];
		//for (i=0;i<SIZE;i++) if(int(ceil(array[i]))	>num) {cout << i <<endl; num++;} 
	cin >> c;
	while(c!=0.00){
		switch((int)ceil(c)){
			case 1:
              low=0; high=2;
              break;
            case 2:
              low=2; high=9; break;
             case 3: 
               low=9; high=29; break;
             case 4:
                 low=29; high=81;break;
              case 5:
                low= 81; high=225; break;
              case 6:
                 low=225;high =SIZE;break;
		}
       cout << bin_search(array,c,low,high) <<endl;
	}
	return 0;
}
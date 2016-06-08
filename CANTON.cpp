#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(false);
	int n,i,t,k,j,round_,remain,term_sum;
	cin >> t;
    while(t--){
    	cin >> n ;
    	j=2*n;
    	k=(int)sqrt(j);
    	i=(k+1)*k;
    	if(i<j) round_=k+1;
    	else round_= k;
    	term_sum= round_+1;
    	remain = n-(round_*(round_-1))/2;
    	if(round_%2)
            cout << "TERM " <<n <<" IS " <<(term_sum-remain)<<"/"<<remain <<endl;
    	else
    		cout <<"TERM "<<n <<" IS " <<(remain)<<"/"<<(term_sum-remain)<<endl;
    	}
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long n,k,s,cnt,a[2000],i,sum,ks;
    while(cin>>n>>k>>s)
    {
        ks=k*s;
        sum=0;
        for(i=0;i<n;i++)
        cin>>a[i];

        sort(a,a+n);

        for(i=1;i<=n;i++)
        {
            sum+=a[n-i];
            if(sum>=ks)
            break;
        }
        cout<<i<<endl;
    }
}
#include <cstdio>
#include <cmath>

using namespace std;
long long inv;

inline void solve( long long len, long long post, long long year )
{
	// printf("len = %lld, post = %lld, year = %lld, inv = %lld\n",len,post,year,inv);
	if( len == 2 )
	{
		long long ret;
		
		if( post == 1 )
			ret = 1;
		else
			ret = 0;
		
		if( inv & 1 )
		{
			if( ret == 1 )
				ret = 0;
			else
				ret = 1;
		}
		
		// printf("ret = %lld\n",ret);
		
		puts( !ret ? "red" : "blue" );
		
		return;
	}
	else if( post > len/2 )
		solve( len/2, post - len/2, year - 1 );
	else
	{
		inv++;
		solve( len/2 ,post ,year - 1 );
	}
}

int main()
{
	long long len, post, year, t, store[52];
	store[0] = 1;
	
	for( t = 1; t <= 51; t++ )
		store[t] = 2 * store[t-1];
	// printf("\n") ;
	
	for( t = 1; t--; )
	{
		scanf("%lld %lld",&year,&post);
		
		if( !year && !post )
		{
			printf("red\n");
			continue;
		}
		
		len = store[year];
		post++;
		
		inv = 0;
		solve( len, post, year );
	}
	
	return 0;
}
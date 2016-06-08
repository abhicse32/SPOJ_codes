#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio();
	int a,b,c,d,r;
	cin >>a >>b >>c;
	while(1){
		if(a==0 && b==0 && c==0)break;
		d=b-a; r=c-b;
        if((d==0 && r==0) || (d!=r)) cout <<"GP " <<c*(c/b)<<endl;
        else cout <<"AP " << c+(c-b) <<endl;
        cin >>a>>b>>c;
    }
    return 0;
}
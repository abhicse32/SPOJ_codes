#include <cstdio> 
#include <cstring> 
#include <cstdlib> 
class Tester{
private:
	char str[100001],sec[99];
	int cnt,n;
public:
	Tester(){cnt=0,n=strlen(gets(str)),gets(sec);}
	inline int getN(){return n;}
	inline bool isSame(int a,int b){return ++cnt<=4*n&&a>=0&&a<n&&b>=0&&b<n?str[a]==str[b]:(printf("ERROR while calling isSame()\n"),exit(1),false);}
	inline void answer(int a){printf("%d\n%s\n",a,sec),exit(0);}
}tester;
inline int getN(){return tester.getN();}
inline bool isSame(int a,int b){return tester.isSame(a,b);}
inline void answer(int a){tester.answer(a);}
#define tester _tester_

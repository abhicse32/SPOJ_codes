import sys
denom=707106781186
num  =500000000000
n=18000
while n>0:
	temp=denom;
	denom=2*denom+num
	n-=1
	num=temp;
num*=10
print '1.',;sys.stdout.softspace=False;
for i in range(20000):
	print num/denom,;sys.stdout.softspace=False;
	num=(num%denom)*10;
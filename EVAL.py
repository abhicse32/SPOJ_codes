import sys
denom,num,n=16002,16000,16000
while True:
	temp=denom;
	denom=n*denom+num
	n-=1
	num=n*temp;
	#print 'jksk ',
	if n==0:
		num=temp*10
		break
print '2.',;sys.stdout.softspace=False;
for i in range(80000):
	print num/denom,;sys.stdout.softspace=False;
	num=(num%denom)*10;
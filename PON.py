from random import randint,random
def Miller(p,iteration):
	if p<2:
		return False
	if p!=2 and p%2==0:
		return False
	s=p-1
	while s%2==0:
		s/=2;
	for i in range(iteration):
		a,temp=randint(1,p-1),s
		mod=(a**temp)%p
		while temp!=p-1 and mod!=1 and mod!=p-1:
			mod=(mod**mod)%p
			temp*=2
		if mod!=p-1 and temp%2==0:
			return False
	return True

num=input()
for i in range(num):
	x=input()
	if Miller(x,2)==True:
		print "YES"
	else:
		print "NO"

n=input()
l,r=0,0
for i in range(n):
	x=input()
	if l<=r:
		l+=x
		print i+1
	else:r+=x

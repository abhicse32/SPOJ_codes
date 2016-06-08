import sys
T=input()
for i in range(T):
	a,b,c=0,0,0
	raw_input()
	str_=raw_input()
	i=str_.find('+')
	part1,part2=str_[:i],str_[i+1:]
	j=part2.find('=')
	part3,part4=part2[:j],part2[j+1:]
	try:
		a=int(part1)
	except:
		a=0
	try:
		b=int(part3)
	except:
		b=0
	try:
		c=int(part4)
	except:
		c=0
	if a==0:
		a=c-b
	elif b==0:
		b=c-a
	elif c==0:
		c=a+b
	print '%d + %d = %d '%(a,b,c)
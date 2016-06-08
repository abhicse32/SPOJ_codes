T=input()
for i in range(T):
	x=input()
	y=0
	jk=3**y
	while jk<x:
		y+=1
		jk=3**y
	str_=""
	if jk==x:
		str_='+'+'0'*y
		print str_
	else:
		pow_=3**y
		par=(pow_-1)/2
		if x<=par:
			y-=1
			pow_=pow_/3
			par=(par-1)/3
		str_='+'
		pow_2=pow_
		while y>0:
			pt=x-pow_2
			par2=(par-1)/3
			cd=abs(pt)
			if pt<0 and cd>par2 and cd<=par:
				str_+='-'
				pow_2-=pow_/3
			elif pt>0 and cd>par2 and cd<=par:
				str_+='+'
				pow_2+=pow_/3
			else:
				str_+='0'
			par=par2
			pow_/=3
			y-=1
		print str_
n=input()
for i in range(n):
	x=input()
	x=x*(x+1)
	print round(float(x/2)/(1+x),5)
from math import sqrt 
import sys
num = int(raw_input())
for  i in range(num):
	a1,a6,a4,a3,a2,a5 = map(int,sys.stdin.readline().split())
	b1,b2,b3,b4,b5,b6 = a1*a1,a2*a2,a3*a3,a4*a4,a5*a5,a6*a6
	exp1 = b1*b5*(b2+b3+b4+b6-b1-b5)
	exp2 = b2*b6*(b1+b3+b4+b5-b2-b6)
	exp3 = b3*b4*(b1+b2+b5+b6-b3-b4)
	exp4 = b1*(b2*b4+b3*b6)+b5*(b2*b3+ b4*b6)
	volume2 =(exp1+exp2+exp3-exp4)
	print "\n%.4f"%(sqrt(abs(volume2))/12),  
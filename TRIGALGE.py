from math import sin,cos
import sys
num=int(raw_input())
for i in range(num):
	A , B, C = map(int,sys.stdin.readline.split())
	guess = (C-B/2)/(A+1)
	sin_sign=1;
	cos_sign=1;
	for z in range(1,7):
		if z%4!=1:
			sin_sign=-1;
		if z%4==0:
			cos_sign = -1;
		if z%2==1:
			guess = guess- (A*guess+B*sin(guess)-C)/(A+B*cos_sign*cos(guess))
		else:
			guess = guess- (A*guess+B*sin(guess)-C)/(A+B*sin_sign*sin(guess))
	print"\n",guess,
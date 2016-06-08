import sys
from math import factorial
num= int(raw_input())
for i in range(num):
	x,y=map(int,sys.stdin.readline().split())
	if y>x:
		print "\n0",
	else:
		y-=1
		x-=1
		if x-y < y:
			y=x-y
		numerator=1;
		for t in range(y):
			numerator*=x;
			x-=1;
		print"\n%d"%(numerator/factorial(y)),
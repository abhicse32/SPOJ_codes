import sys
num=input()
for i in range(num):
	a,n,m=map(int,sys.stdin.readline().split())
	print "\n%d"%((a**n)%m),
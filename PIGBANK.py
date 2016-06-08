import sys
from operator import itemgetter
num = int(raw_input())
for i in range(num):
	E,F= map(int,sys.stdin.readline().split())
	N = int(raw_input())
	lst=list()
	for j in range(N):
		temp1,temp2= map(int,sys.stdin.readline().split())
		lst.append([temp1,temp2,temp1/temp2])
	lst=sorted()



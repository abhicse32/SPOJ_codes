from __future__ import division
import sys
while True:
	budget,num = map(int,sys.stdin.readline().split())
	if budget==0 and num==0:
		break
	lst=[];
	for i in range(num):
		budget_,num_=map(int,sys.stdin.readline().split())
		if num_==0:
			num_+=0.001
		lst.append([budget_,num_,budget_/num_]);
	lst=sorted(lst,key=lambda lst:lst[2])
	len_=len(lst)
	#print lst
	budget_,num_=0,0
	for i in range(len_):
		if budget_+lst[i][0] <=budget:
			budget_+=lst[i][0]
			num_+=lst[i][1]
	print "\n%d %d"%(budget_,num_),
	str_=raw_input()



import sys
while True:
	budget,num = map(int,sys.stdin.readline().split())
	if budget==-1 and num==-1:
		break;
	min_=min(budget,num)
	max_=max(budget,num)
	if max_%(min_+1)==0:
		print"\n%d"%(max_/(min_+1)),
	else:
		print"\n%d"%((max_/(min_+1))+1),
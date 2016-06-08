import sys
num=int(raw_input())
for i in range(num):
	num_,digits=map(int,sys.stdin.readline().split())
	num_=str(num_)
	for t in '0123456789':
		count_=num_.count(t)
		if count_ <= digits:
			num_=num_.replace(t,'')
		else:
			num_=num_.replace(t,'',digits);
			break
		digits-=count_
	print "\n",num_,


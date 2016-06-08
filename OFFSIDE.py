import sys
while True:
	a,d= map(int,sys.stdin.readline().split())
	if a==0 and d==0:
		break;
	lst=list(map(int,sys.stdin.readline().split()))
	lst_=list(map(int,sys.stdin.readline().split()))
	lst.sort()
	lst_.sort()
	if(lst[0]< lst_[1]):
		print "\nY",
	else:
		print "\nN",
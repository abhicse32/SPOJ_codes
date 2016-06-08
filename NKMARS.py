import sys
inp=input()
lst1,lst2=[],[]
for i in range(inp):
	a,b,c,d=map(int,sys.stdin.readline().split());
	lst1.append([a,b]);
	lst1.append([c,b]);
	lst2.append([a,d]);
	lst2.append([c,d]);
lst1=sorted(lst1,key=lambda lst:lst[0])
lst2=sorted(lst2,key=lambda lst:lst[0])
print lst1
print lst2

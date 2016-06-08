import sys
num = int(raw_input())
for i in range(num):
	p=raw_input()
	num_i = int(raw_input())
	lst = list();
	lst__ = list();
	for j in range(1,num_i+1):
		str_ = raw_input()
		x= int(raw_input())
		for k in range(x):
			city , dist = map(int,sys.stdin.readline().split())
			if [city,j] in lst__:
				continue
			else:
				lst.append([j,city,dist])
				lst__.append([j,city])
	lst=sorted(lst, key = lambda x: int(x[2]))
	#print lst,
	lst2=[lst[0][0],lst[0][1]]
	cost = lst[0][2]
	for t in lst:
		flag =  False
		if t[0] in lst2 and t[1] in lst2:
			continue
		lst2.append(t[0])
		lst2.append(t[1])
		cost+=t[2]
	print "\n",cost,

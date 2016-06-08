import sys
n,e=map(int,sys.stdin.readline().split())
if n<=1:
	print"\n0",
else:
	lst=[[0,0,0]]*e
	counter=0
	for i in range(e):
		i,j,k=map(int,sys.stdin.readline().split())
		lst[counter]=[i,j,k]
		counter+=1
	lst=sorted(lst,key=lambda x:x[2])
	new_lst=[[-5,-5]]*n
	len_=0
	weight=0
	for i in lst:
		if len_==n:
			break
		let_=[i[0],i[1]]
		if (let_ in new_lst)!=True:
			new_lst[len_]=let_
			weight+=i[2]
		print new_lst,weight
	print weight




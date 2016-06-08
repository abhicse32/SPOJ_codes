num = int(raw_input())
lst=range(2,16000)
x=[]
x.append(lst[0])
y=lst[0]
while y<1150:
	lst=[i for i in lst if (lst.index(i))%y !=0]
	y=lst[0]
	x.append(y)
print x



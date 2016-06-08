num = int(raw_input())
for i in range(num):
	lst= [0]*26
	num_ = int(raw_input())
	for j in raw_input(num_):
		str_= raw_input()
		lst[ord(str_[0])-97]+=1
		lst[ord(str_[-1])-97]-=1
		start, end = 0,0
		flag=True;
		for k in range(26):
			if lst[k]>1 or lst[k] < -1:
				flag=False;
				break;
			elif lst[k]==1:
				start+=1
			elif lst[k]==-1:
				end+=1
		if flag==True:
			if (start==0 and end==0) or (start==1 and end==1):
				print "Ordering is possible."
			else:
				print"The door cannot be opened."
		else:
			print"The door cannot be opened."



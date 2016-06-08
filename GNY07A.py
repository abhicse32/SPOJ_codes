num=input()
for i in range(1,num+1):
	string=raw_input();
	str_=string.split()
	num=int(str_[0])
	string=str_[1]
	print i,string[:num-1]+string[num:]
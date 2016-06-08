num = int(raw_input())

for i in range (num):
	str_ = raw_input()
	min_str=str_
	temp =0
	for j in range(len(str_)):
		temp_str=str_[j:]+str_[:j] 
		if min_str > temp_str:
			min_str = temp_str
			temp = j
	print "\n",temp+1,
		



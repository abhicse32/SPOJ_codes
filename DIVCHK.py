num= input()
for i in range(num):
	str_=raw_input()
	div=input();
	len_=len(str_)-1;
	two=1;
	num_=0;
	while len_ >=0:
		num_+=int(str_[len_])*two;
		two*=2;
		len_-=1
	#print (num_)
	if num_%div==0:
		print ("\nDivisible By %d"%div)
	else:
		print ("\nNot Divisible By %d"%div)


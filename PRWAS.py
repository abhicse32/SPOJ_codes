num=input()
while num>0:
	n=input()
	if n==1:
		print("%d\n"%n)
	else:
		temp1=(n*(n+1))/2;
		temp2=(n<<1)+1;
		#print temp1, temp2
		total=4*((4*(temp1*temp2)/3)-(7*temp1)+4*n)
		print (total-3)%1000000007
	num-=1;
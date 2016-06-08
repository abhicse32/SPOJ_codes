import sys
num = int(raw_input())
for j in range(num):
	a=int(raw_input())
	b=int(raw_input())
	c=int(raw_input())
	if (c>a and c > b) or(a%2==0 and b%2==0 and c%2==1):
		print "\n",-1,
	count=1
	temp_max=max(a,b)
	temp_min=0
	while True:
		if c==temp_min or c==temp_max:
			print "\n",count,
			break
		

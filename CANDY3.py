num = int(raw_input())
print
for i in range(num):
	count=int(raw_input())
	sum_=0;
	for j in range(count):
		x=int(raw_input())
		sum_+=x
	if sum_%count==0:
		print"\nYES",
	else:
		print"\nNO",
	print

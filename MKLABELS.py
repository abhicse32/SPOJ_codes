import sys
i=1;
while True:
	num = int(raw_input())
	if num==0:
		break
	print "\nCase %d,"%i,"N = %d"%num,;sys.stdout.softspace=False; print", # of different labelings =",num**(num-2),
	i+=1
sys.exit(0)

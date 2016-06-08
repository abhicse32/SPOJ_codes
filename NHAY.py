counter =0;
n = -1
#print
while True:
	num = raw_input()
	try:
		num = int(num)
	except ValueError:
		break

	num = int(num)
		#if(!num) :
	#	break
	needle = raw_input();
	haystack= raw_input();
	for i in range(len(haystack)+1):
		if haystack[i:i+num] == needle:
			print "\n",i,



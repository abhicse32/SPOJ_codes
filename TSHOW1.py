from math import log
#getBin = lambda x, n: x >= 0 and str(bin(x))[2:].zfill(n) or "-" + str(bin(x))[3:].zfill(n)
num  = int(raw_input())
for i in range(num):
	x = int(raw_input())
	bits = int(log(x+1)/log(2))
	xt = x+1 - 2**bits
	temp_str="0"
	str_= "{0:b}".format(xt)
	temp_str*=(bits-len(str_))
	str_=temp_str+str_;
	str_=str_.replace('1','6')
	str_=str_.replace('0','5');
	print int(str_)

from math import log
while True:
	str_ = raw_input()
	if str_ =='00e0':
		break;
	num=int(str_[:2])
	num*=10**(int(str_[3:]))
	index=int(log(num)/log(2))
	P=2**index
	print "%d"%(1+(num-P)*2)
	#lst=[x for x in range(1,num+1)]
	#cur_start,power,index_increase=2,1,0
	#flag = False
	#while True:
	#	divisor=2**power
		#lst=[x for x in lst if (x-cur_start)%divisor!=0]
	#	pt=2**index_increase
	#	if(num- cur_start)%divisor == 0:
	#		if flag==True:
	#			cur_start+=pt+pt*2;
	#		else:
	#			cur_start+=pt;
	#		num-=2**index_increase;
	#		flag=False
	#	else:
	#		if (cur_start-pt)<0:
	#			cur_start+=pt
	#		else:
	#			cur_start-=pt
	#			flag=True			
		#print num,divisor,cur_start
		#if divisor ==256:
		#	break;
	#	power+=1;
	#	index_increase+=1
		#print lst, cur_start
	#	if num<=cur_start or cur_start < 0:
	#		print num
	#		break

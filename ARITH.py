import re
T=input()
for i in range(T):
	exp=raw_input()
	str_lst=re.split(r'[\+|\-|\*]+',exp)
	len_=len(exp)
	ch=''
	#print str_lst
	for kk in range(len_):
		try:
			int(exp[kk])
		except:
			ch=exp[kk]
			break
	lst1=str_lst[0]
	lst2=str_lst[1]
	len1=len(lst1)
	len2=len(lst2)
	x,y,kpt=0,0,0
	if ch=='+':
		res=int(lst1)+int(lst2)
		kst=len(str(res))
		if len2>=len1:
			x=len2-len1+1
			kpt=len2+1
		elif len2<len1:
			x=kst-len1
			y=kst-len2-1
			kpt=max(kst,len1)
		print (x*' '+lst1)
		print (y*' '+'+'+lst2)
		print kpt*'-'
		print (kpt-kst)*' '+'%d'%(res)
	elif ch=='-':
		res=int(lst1)-int(lst2)
		kst=len(str(res))
		if len2>=len1:
			x=len2-len1+1
			kpt=len2+1
		elif len2<len1:
			y=len1-len2-1
			kpt=len1
		print (x*' '+lst1)
		print (y*' '+'-'+lst2)
		print kpt*'-'
		print (kpt-kst)*' '+'%d'%(res)
	else:
		kst=len(str(res))
		if res>0:
			if len1>len2:
				x=kst-len1
				y=kst-len2-1
			elif len2>=len1:
				if len2==kst:




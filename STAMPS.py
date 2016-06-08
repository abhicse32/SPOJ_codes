import sys
num = int(raw_input())
for i in range(1,num+1):
    num1, num2 = map(int,sys.stdin.readline().split())
    lst = list()
    while True:
    	lst+=list(map(int,raw_input().split()))
    	if len(lst)>= num2:
    		break
    lst=sorted(lst,key=int,reverse=True)
    sum =0;
    count =0;
    flag = False;
    for t in lst:
    	sum+=t;
    	count+=1
    	if sum >= num1:
    		print "\nScenario #%d" %i,;sys.stdout.softspace=False;print":"
    		print count
    		flag = True
    		break;
    if flag==False:
    	print "\nScenario #%d" %i,;sys.stdout.softspace=False;print":",
    	print"\nimpossible"


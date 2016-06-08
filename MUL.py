import sys 
num = int(raw_input())
for i in range(num):
	num1,num2 = map(int,sys.stdin.readline().split())
	print num1*num2
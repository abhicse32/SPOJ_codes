import sys
from math import log
num =input()
for i in range(num):
	N,K,M=map(int,sys.stdin.readline().split())
	power = int(log(M/N)/log(K))
	print ("\n%d"%power),

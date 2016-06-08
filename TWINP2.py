c=18413900
l=[1]*c
l_,j,k,m_=[0]*c,2,1,0
bn=1
lk_=[[]]*100029
l_[0],l_[1],l_[2]=2,3,5
for i in range(2,c):
  if l[i]==1:
    l_[j]=i
    j+=1
    t=l_[k]
    x=l_[k-1]
    if t-x==2:
    	lk_[m_]=[x,t]
    	m_+=1
    	#lk_.append([x,t])
    	#print x,t,bn
    	#bn+=1
    k+=1
    for h in range(i,c,i):
      l[h]=0
#lk_[0][0],lk_[0][1]=2,3
#print lk_	


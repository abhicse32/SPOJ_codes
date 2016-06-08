c=1367070
l=[1]*c
l_,j,k=[0]*c,1,1
for i in range(2,c):
  if l[i]==1:
    l_[j]=i
    j+=1
    t=l_[l_[k]]
    if t>0:
      print t,
      k+=1
    for h in range(i,c,i):
      l[h]=0


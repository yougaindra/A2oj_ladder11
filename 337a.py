n,m = map(int,raw_input().split())
a = map(int,raw_input().split())
a.sort()
ans = 1000000000
for i in range(m-n+1):
	#print i
	#print a[i:n+i],a[i:n+i]
	if ans > max(a[i:n+i])-min(a[i:n+i]):
		ans = max(a[i:n+i])	-min(a[i:n+i])
print ans	
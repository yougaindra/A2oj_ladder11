n,m = map(int,raw_input().split())
a = map(int,raw_input().split())
a.sort()
ans = 0;
for i in range(m):
	if(a[i] < 0):
		ans-=a[i];
print ans
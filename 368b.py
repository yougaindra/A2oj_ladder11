n,m = map(int,raw_input().split())
a = map(int,raw_input().split())
x =set()
x.add(a[-1])
ans = [0]*n;
ans[-1] = 1;
for i in range(n-1,-1,-1):
	x.add(a[i])
	ans[i] = len(x);
for i in range(m):
	print ans[input()-1]
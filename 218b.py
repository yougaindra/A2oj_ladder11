def s(n):
	return n*(n+1)/2;
def f(a,b):
	return s(a)-s(b-1)
n,m = map(int,raw_input().split())
a = map(int,raw_input().split())
b = a[:]
ans = 0;
for i in range(n):
	mx = max(a)
	ans+=mx;
	a[a.index(mx)] -=1;
ans2 = 0;
for i in range(n):
	if 0 in b:
		b.remove(0);
	mn = min(b)
	ans2 += mn
	b[b.index(mn)] -= 1;

print ans,ans2

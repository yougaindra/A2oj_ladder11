n = input()
d = {}
for i in range(n):
	x = tuple(map(int,raw_input().split()))
	if d.get(x) == None:
		d[x]  = 1;
	else:
		d[x]+=1;
print max(d.values())
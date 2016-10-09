d = {}
n = input()
a = map(int,raw_input().split())
for i in range(len(a)):
	if d.get(a[i])==None:
		d[a[i]] = [i];
	else:
		d[a[i]] += [i];

a.sort()
if len(d[a[0]]) > 1:
	print "Still Rozdil"
else:
	print d[a[0]][0]+1

n = input()
a = map(int,raw_input().split())
d = {}
ans = []
for i in range(len(a)):
	if d.get(a[i]) == None:
		d[a[i]] = [i]
	else:
		d[a[i]].append(i)
for i in d:
	d[i].sort()
for i in sorted(d.keys()):
	#	print d[i]
	flag = 1
	p = 0
	if len(d[i]) > 1:
		p = d[i][1] - d[i][0]
	for j in range(2,len(d[i])):
		if d[i][j]-d[i][j-1] != p:
			flag = 0
			break;
	if flag:
		ans.append([i,p])
print len(ans)
for i in ans:
	print i[0],i[1]

inp = open('input.txt','r');
out = open('output.txt','w');
n = int(inp.readline());
a = map(int,inp.readline().split())
d = {}

for i in range(2*n):
	if d.get(a[i]) == None:
		d[a[i]] = [i+1]
	else:
		d[a[i]] += [i+1]
flag = 1;
for i in d.keys():
	if len(d[i])%2 !=0:
		flag = 0
		break;
if flag:
	for i in d.keys():
		for j in range(0,len(d[i]),2):
			out.write(str(d[i][j]) + " " +str(d[i][j+1])+'\n')
else:
	out.write('-1')
out.close()
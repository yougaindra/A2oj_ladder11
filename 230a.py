s,n = map(int,raw_input().split())
a = []
for i in range(n):	
	a.append(map(int,raw_input().split()))
a.sort()
flag = 1;
for i in range(n):
	if a[i][0] >= s:
		flag = 0;
		break;
	else:
		s+=a[i][1]
if(flag):
	print "YES"
else:
	print "NO"
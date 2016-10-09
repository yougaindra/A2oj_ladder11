s = raw_input()
t = 'hello'
flag = 1
i = 0;
for x in t:
	i = s.find(x)
	#print i
	if i == -1:
		flag = 0;
		break
	else:
		s = s[i+1:]
if(flag):
	print "YES"
else:
	print "NO"
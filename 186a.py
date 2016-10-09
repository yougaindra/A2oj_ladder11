s = list(raw_input())
t = list(raw_input())
x1 = -1;
x2 = -1;
if len(s) == len(t):
	for i in range(len(s)):
		if s[i] != t[i]:
			x1 = i;
			break
	for i in range(len(s)-1,-1,-1):
		#print i
		if s[i] != t[i]:
			x2 = i;
			break;
#print x1,x2
s[x1],s[x2] = s[x2],s[x1]
if s == t:
	print "YES"
else:
	print "NO"
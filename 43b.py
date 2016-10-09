from collections import Counter
s = raw_input().split()
s = ''.join(s);

s  = Counter(s);
flag = 1
t =raw_input().split()
t = ''.join(t);
for i in t:
	if s[i]:
		s[i]-=1;
	else:
		flag = 0
		break;
if flag:
	print "YES"
else:
	print "NO"
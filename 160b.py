n = input()
s = raw_input()
s1 = []
s2 = []
for i in range(n):
	s1.append(int(s[i]))
for i in range(n,2*n):
	s2.append(int(s[i]))
s1.sort()
s2.sort()
f1 = 1;
f2 = 1;
for i in range(n):
	if s1[i] <= s2[i]:
		f1 = 0;
for i in range(n):
	if s1[i] >= s2[i]:
		f2 = 0;
if f1 or f2:
	print "YES"
else:
	print "NO"

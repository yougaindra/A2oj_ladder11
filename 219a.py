n = input()
s = raw_input()
from collections import Counter
d = Counter(s)
flag = 1
for i in d.values():
	if i%n != 0:
		flag = 0
		break
if flag==0:
	print "-1";
else:
	for i in d:
		d[i]/=n;
	temp = ''
	for i in d:
		temp+=(d[i]*i)
	print temp*n
s = raw_input()
from collections import Counter
s = Counter(s)
odd = 0;
for i in s:
	if s[i]%2:
		odd+=1
if odd == 0 or odd&1:
	print "First"
else:
	print "Second"
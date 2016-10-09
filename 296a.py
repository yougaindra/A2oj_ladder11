from collections import Counter
n = input()
a = Counter(map(int,raw_input().split()))
#print max(a.values())
# if n == 1:
# 	print "YES";
# elif n == 2 and max(a.values())!= 2:
# 	print "YES"
# elif n == 3 and max(a.values())!= 3:
# 	print "YES"
if max(a.values()) > (n+1)/2:
	print "NO";
else:
	print "YES"


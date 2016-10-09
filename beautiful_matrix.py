a = [ [0]*5 for i in range(5)]

for i in range(5):
	a[i] = map(int,raw_input().split())
for i in range(5):
	for j in range(5):
		if a[i][j] == 1:
			ans = (i,j)
#print ans
print( abs(2-ans[0]) + abs(2-ans[1]))


ans = 0
for _ in range(input()):
	s = list(set(raw_input()))
	if '+' in s:
		ans+=1
	else:
		ans-=1
print ans
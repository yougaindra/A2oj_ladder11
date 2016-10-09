n  = input()
ans = 0;
for i in range(1000):
	for j in range(i):
		k = i*i + j*j
		d = int(k**0.5)
		if(d*d == k):
			ans+=1
print ans+1
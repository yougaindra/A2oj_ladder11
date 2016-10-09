inp = open('input.txt','r');
out = open('output.txt','w');

b,g = map(int,inp.readline().split())
ans = '';
for i in range(min(b,g)):
	ans += 'BG';
b -= len(ans)/2;
g -= len(ans)/2;
if ans[-1] == 'G':
	ans = ans+b*'B'
else:
	ans = 'B'*b + ans;
if ans[-1] == 'B':
	ans = ans+g*'G'
else:
	ans = 'G'*g + ans

out.write(ans)
out.close()
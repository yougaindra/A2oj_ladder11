n,m = map(int,raw_input().split())
correct = map(int,raw_input().split())
wrong = map(int,raw_input().split())
mcx = max(correct);
mcn = min(correct);
mnw = min(wrong);
ans= -1;
if max(2*mcn,mcx) < mnw:
	ans = max(2*mcn,mcx)
print ans

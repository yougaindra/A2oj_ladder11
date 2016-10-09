n = input()
d = {}
a = map(int,raw_input().split())
for i in range(1,8):
	d[i] = 0;
for i in a:
	d[i]+=1;
flag = 1;
# if (d[1] == 0 and d[3]==0 and d[6]==0) and (d[1] == 0 and d[2] ==0 and d[6]==0) and (d[1] ==0 and d[2] ==0 or d[4] ==0) or d[5] or d[7]:
# 	flag = 0;

# if flag==0:
# 	print -1;
flag = 0
chk = 0
if d[5] or d[7]:
	flag = 1
ans = []
while(d[1] and flag==0):
	if(d[4] and d[2]):
		ans.append([1,2,4])
		d[2]-=1;
		d[4]-=1;
		chk+=1
	elif(d[3] and d[6]):
		ans.append([1,3,6])
		d[3]-=1;
		d[6]-=1;
		chk+=1
	elif(d[2] and d[6]):
		ans.append([1,2,6])
		d[2]-=1;
		d[6]-=1;
		chk+=1
	else:
		break
	d[1]-=1
if flag or chk == 0 or (d[1] or d[2] or d[3] or d[4] or d[5] or d[6]):
	print '-1'
else:
	#print d
	for i in ans:
		print i[0],i[1],i[2]

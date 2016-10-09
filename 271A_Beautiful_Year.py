s = raw_input()
num = int(s)+1
while(num):
	if len(set(str(num))) == len(str(num)):
		print num
		break
	num+=1
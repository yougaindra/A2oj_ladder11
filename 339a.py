s = map(int, raw_input().split('+'))
s.sort()
print '+'.join([str(i) for i in s])
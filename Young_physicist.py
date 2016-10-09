class vector(object):
	def __init__(self,x,y,z):
		self.x = x
		self.y = y
		self.z = z
	def __add__(self,other):
		return vector(self.x+other.x,self.y+other.y,self.z+other.z)
	def chk(self):
		return self.x == 0 and self.y == 0 and self.z == 0;

v = vector(0,0,0)
for _ in range(input()):
	x,y,z = map(int,raw_input().split())
	v  = v+vector(x,y,z);
if v.chk():
	print "YES"
else:
	print "NO"

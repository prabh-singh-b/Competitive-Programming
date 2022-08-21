
def func():
	s = input()
	n = int(input())
	c = ''
	for i in range(n):
		temp = input()
		c+= temp
	ds = {}
	dc = {}
	res = True

	for i in s:
		if i in ds:
			ds[i] += 1
		else:
			ds[i] = 1

	for i in c:
		if i in dc:
			dc[i] += 1
		else:
			dc[i] = 1

	for key,value in dc.items():
		if key in ds:
			if ds[key] >= dc[key]:
				continue
			else:
				res = False
				break
		else:
			res = False
			break

	if res:
		print("YES")
	else: 
		print("NO") 


n = int(input())
for i in range(n):
	func()
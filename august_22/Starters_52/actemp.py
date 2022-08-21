a = int(input())
for i in range(a):
	l = input().split(' ')
	l = [int(i) for i in l]

	res = True

	if(l[0] > l[1] or l[2] > l[1]):
		res = False

	if res:
		print("YES")
	else:
		print("NO")
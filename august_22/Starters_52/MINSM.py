def gcd(a,b):
	if a<b:
		a,b = b,a
	while(b):
		a,b = b, a%b
	return a

t = int(input())


for i in range(t):
	n = int(input())
	l = input().split(' ')
	l = [int(i) for i in l]
	for i in range(1,n):
	    l[0] = gcd(l[0],l[i])

	print(l[0]*n)

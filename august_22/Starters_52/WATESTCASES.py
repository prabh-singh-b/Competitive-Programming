t = int(input())
for i in range(t):
	l = int(input())
	wa = input().split(' ')
	wa = [int(i) for i in wa]
	s = input()
	min = 9999

	for i in range(l):
		if(s[i] == '0'):
			if wa[i] < min:
				min = wa[i]

	print(min)

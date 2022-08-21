t = int(input())
for x in range(t):
	a = int(input())
	ans = 0
	for i in range(1,a+1,2):
		temp = a-i
		temp += 1
		ans += temp*temp

	print(ans)
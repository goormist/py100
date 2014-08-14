number = raw_input().split(' ')
min = number[0]
for i in number:
	if min > i:
		min = i
		
print(min)
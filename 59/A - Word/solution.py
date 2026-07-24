str = input()
upper,lower = 0,0
for i in str:
    if 'A' <= i <= 'Z':
        upper += 1
    else:
        lower += 1
 
if upper > lower:
    print(str.upper())
else:
    print(str.lower())
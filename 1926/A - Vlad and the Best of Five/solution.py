t = input()
t = int(t)
for i in range(t):
    str = input()
    if str.count('A') > str.count('B'):
        print('A')
    else:
        print('B')
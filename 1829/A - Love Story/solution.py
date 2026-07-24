t = int(input())
s = "codeforces"
for i in range(t):
    str = input()
    x = 0
    for i in range(10):
        if str[i] != s[i]:
            x += 1
    print(x)
t = int(input())

for i in range(t):
    n = int(input())
    s = input()
    p = ""
    for j in range(n):
        p += s[j]
        if j % 2 == 0:
            p = p[::-1]
    print(p)

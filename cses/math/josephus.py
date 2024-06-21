# incomplete

n = int(input())

s = bin(n)
s += s[2]
s = s[3:]

print(int(s, 2))


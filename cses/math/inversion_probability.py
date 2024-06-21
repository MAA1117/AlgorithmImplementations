n = int(input())
v = [int(num) for num in input().split()]

total = 0.0
for a in range(n):
    for b in range(n):
        if a >= b:
            continue
        xa = v[a]
        xb = v[b]
        if xa <= xb:
            combos = (xa - 1) * xa / 2
        else:
            combos = (xa * xb) - (xb * (xb + 1) / 2)
        total += combos / (xa * xb)

answer = round(total, 8)
print(format(answer, '.6f'))

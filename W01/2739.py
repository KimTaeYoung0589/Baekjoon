# 구구단
N = int(input())

sum = 0
for i in range(1, 10):
    sum = N * i
    print(f"{N} * {i} = {sum}")

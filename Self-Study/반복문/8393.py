# 합
import sys
input = sys.stdin.readline

n = int(input())

result = 0
for i in range(0, n+1):
    result += i

print(result)

# n = int(input())

# print(n * (n + 1) // 2)
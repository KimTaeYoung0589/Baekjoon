# 곱셈
import sys

x = int(sys.stdin.readline())
y = int(sys.stdin.readline())

O = y % 10
T = y % 100 // 10
H = y // 100
sum = (x * O) * 1 + (x * T) * 10 + (x * H) * 100

print(x * O)
print(x * T)
print(x * H)
print(sum)

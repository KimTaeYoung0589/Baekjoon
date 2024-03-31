# 곱셈
import sys

x, y = map(int,(sys.stdin.readline() for _ in range(2)))

result1 = x * (y % 10)
result2 = x * (y % 100 // 10)
result3 = x * (y // 100)
result4 = result1 + result2 * 10 + result3 * 100

print( result1, result2, result3, result4, sep='\n')
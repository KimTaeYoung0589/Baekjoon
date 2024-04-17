# 사칙연산
import sys
a, b = map(int, sys.stdin.readline().split())

print(a+b, a-b, a*b, a//b, a%b, sep='\n')
# print(f'{a+b}\n{a-b}\n{a*b}\n{a//b}\n{a%b}')
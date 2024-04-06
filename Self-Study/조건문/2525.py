# 오븐 시계
import sys
input = sys.stdin.readline

a,b = map(int, input().split())
c = int(input())

total = a * 60 + b + c
if total >= 1440: total -= 1440

a = total // 60
b = total % 60
print(a, b)
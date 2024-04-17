# A+B - 7
import sys
input = sys.stdin.readline

for i in range(1, int(input())+1):
    A, B = map(int, input().split())
    print(f"Case #{i}: {A + B}")

# 최적화 코드
# import sys

# t=int(input())

# for i in range(t):
#   a,b= map(int, sys.stdin.readline().split())
#   print("Case #", i+1, ": ", a+b, sep='')
# 두 수 비교하기
import sys
input = sys.stdin.readline

a, b = map(int,input().split())

if a > b: print(">")
elif a < b: print("<")
else: print("==")
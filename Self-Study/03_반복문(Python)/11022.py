# A+B - 8
import sys
input = sys.stdin.readline

for i in range(1, int(input())+1):
    A, B = map(int, input().split())
    print(f"Case #{i}: {A} + {B} = {A + B}")
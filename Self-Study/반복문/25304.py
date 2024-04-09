# 영수증
import sys
input = sys.stdin.readline

sum_price = int(input())
things_kind = int(input())

sum_things = 0
for i in range(things_kind):
    things_price, things_cnt = map(int, input().split())
    sum_things += things_price * things_cnt

if sum_price == sum_things: print("Yes")
else: print("No")


# 최적화 코드
# import sys
# input = sys.stdin.readline

# total = int(input())
# for i in range(int(input())):
#     a,b = map(int,input().split())
#     total -= a*b

# print("Yes" if total == 0 else "No")
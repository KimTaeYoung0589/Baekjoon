# 큐 2

# deque 사용하지 않음
from sys import stdin
input()
s, com = [], stdin.readlines()
cnt = 0
for x in com:
    c = x.split()
    if c[0] == "push":
        s.append(c[1])
    elif c[0] == 'pop':
        if len(s) > cnt:
            print(s[cnt])
            cnt += 1
        else:
            print(-1)
    elif c[0] == 'size':
        print(len(s)-cnt)
    elif c[0] == 'empty':
        if len(s) == cnt:
            print(1)
            cnt = 0
            s = []
        else:
            print(0)
    elif c[0] == 'front':
        if len(s) > cnt:
            print(s[cnt])
        else:
            print(-1)
    elif c[0] == 'back':
        if len(s) > cnt:
            print(s[-1])
        else:
            print(-1)

# deque 사용함
# import sys
# from collections import deque
# n = int(input())
# queue = deque([])
# for i in range(n):
#     com = sys.stdin.readline().split()
#     if com[0] == 'push':
#         queue.append(com[1])
#     elif com[0] == 'pop':
#         if len(queue) == 0:
#             print(-1)
#         else:
#             print(queue.popleft())
#     elif com[0] == 'size':
#         print(len(queue))
#     elif com[0] == 'empty':
#         if len(queue) == 0:
#             print(1)
#         else:
#             print(0)
#     elif com[0] == 'front':
#         if len(queue) == 0:
#             print(-1)
#         else:
#             print(queue[0])
#     elif com[0] == 'back':
#         if len(queue) == 0:
#             print(-1)
#         else:
#             print(queue[-1])

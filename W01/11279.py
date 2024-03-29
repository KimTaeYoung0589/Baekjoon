# 최대 힙
import sys
import heapq as hq

n = int(sys.stdin.readline())
heap = []

for i in range(n):
    x = int(sys.stdin.readline())
    if x:
        hq.heappush(heap, (-x, x))
    else:
        if len(heap) >= 1:
            sys.stdout.write(hq.heappop(heap)[1])
        else:
            sys.stdout.write(0)

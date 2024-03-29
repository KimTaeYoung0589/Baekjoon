# 이진 검색 트리
import sys
sys.setrecursionlimit(10 ** 9)

# 변수 초기화
note = []
cnt = 0
while cnt <= 10000:
    try:
        temp = int(sys.stdin.readline())
    except:
        break
    note.append(temp)
    cnt += 1

def divide(note, start, end):
    # base case
    if end == start:
        return []
    if end-start <= 1:
        return [note[start]]

    # step
    root = note[start]
    find_idx = end
    for i in range(start+1, end):
        if note[i] > root:
            find_idx = i
            break
    tree = divide(note, start+1, find_idx) + divide(note, find_idx, end) + [note[start]] # 왼+오+루트
    return tree


tree = divide(note, 0, len(note))
for t in tree:
    print(t)

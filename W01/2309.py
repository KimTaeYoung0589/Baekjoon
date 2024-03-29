# 일곱 난쟁이

# itertools 라이브러리 사용
# import itertools

# array = [int(input()) for _ in range(9)]

# for i in itertools.combinations(array, 7):
#     if sum(i) == 100:
#         for j in sorted(i):
#             print(j)
#         break


# itertools 라이브러리 사용하지 않음
arr = [(int(input())) for _ in range(9)]
arr.sort()  # 오름차순 정렬
temp = []   # 7 난쟁이 목록
find = False  # 찾음 여부


def dfs(depth):
    global find
    # 답을 찾았으면 바로 종료
    if find:
        return
    # 7 난쟁이를 다 선택했다면
    if (depth == 7):
        # 키의 합이 100이면
        if sum(temp) == 100:
            for i in temp:
                print(i)
            find = True    # 찾음으로 변경
        return
    # 7 난쟁이를 다 선택하지 않았다면
    else:
        # depth 이후 값의 범위에서 선택
        for i in range(depth, len(arr)):
            # 선택하지 않았던 수라면
            if arr[i] not in temp:
                temp.append(arr[i])
                dfs(depth + 1)
                temp.pop()


dfs(0)

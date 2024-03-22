# 문자열 반복
# word = list(str(input()))

# print(len(word))

# for i in range(0, len(word)):
#     P = len[i] * R

Case = int(input())

for i in range(Case):
    N, S = input().split()
    for j in range(len(S)):
        print(S[j] * int(N), end='')
    print('')

import sys
# list()로 묶는 경우 리스트로의 변환을 수행하므로 메모리를 더 소비할 수 있음 but 대부분의 로직에서 그렇게 큰 차이는 없을 것
# A, B = list(map(int, sys.stdin.readline().split()))

# map으로 묶었을 경우 리스트의 변환 없이, 바로 각각의 요소를 정수로 반환하여 'A','B'에 할당함
A, B = map(int, sys.stdin.readline().split())

print(A + B, A - B, A * B, A // B, A % B, sep="\n")

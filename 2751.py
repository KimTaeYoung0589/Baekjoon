# 수 정렬하기 2
import sys

x = int(sys.stdin.readline())
num_list = []
for i in range(x):
    num_list.append(int(sys.stdin.readline()))
num_list1 = sorted(num_list)
for i in range(len(num_list)):
    print(num_list1[i])

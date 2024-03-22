score = int(input())
# print(*score) <- [score](리스트 형태)로 결과값이 나와야 할 것을 언패키징 해서 요소의 값만 보이게 해줌
# map()만 사용한 경우 실제 값이 없기 때문에 비교를 할 수 없어 실행되지 않음

if score >= 90 and score <= 100 : print("A")
elif score >= 80 and score <= 89: print("B")
elif score >= 70 and score <= 79: print("C")
elif score >= 60 and score <= 69: print("D")
else: print("F")
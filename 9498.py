# 시험 성적
score = int(input())
# print(*score) <- [score](리스트 형태)로 결과값이 나와야 할 것을 언패키징 해서 요소의 값만 보이게 해줌
# map()만 사용한 경우 실제 값이 없기 때문에 비교를 할 수 없어 실행되지 않음

# if score >= 90 and score <= 100 : print("A")
# 위 코드의 경우 불필요한 조건문을 한 번 더 확인하므로 추가 실행 시간이 소요 될 수 있음 but 눈에 띄게 작용할 경우는 드물 것(무시해도 될 정도)
if score >= 90:
    print("A")
elif score >= 80:
    print("B")
elif score >= 70:
    print("C")
elif score >= 60:
    print("D")
else:
    print("F")

import math

# 에라토스 테네스의 채 사용
# n의 갯수만큼 1로 가득찬 배열을 만들고 소수가 아닌 부분을 0으로 만든후 마지막에 1의 갯수를 카운트

def solution(n):
    list = [1] * (n+1) # n의 갯수만큼 1로 가득찬 배열을 만들고

    flag = int(math.sqrt(n)) + 2 # 어디까지 반복할지 지정

    for i in range(2, flag): # 
        for j in range(0, len(list), i):
            if i == j : # 소수 일때
                continue
            list[j] = 0 # 소수가 아닐 때 
    list[1] = 0 # 1은 소수가 아니므로 0 대입

    return list.count(1) # list 안 1의 개수를 카운트
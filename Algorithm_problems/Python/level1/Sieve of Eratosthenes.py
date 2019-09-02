import math

# 1~n 까지의 소수의 갯수
def solution(n):
    list = [1] * (n+1)

    flag = int(math.sqrt(n)) + 2

    for i in range(2, flag):
        for j in range(0, len(list), i):
            if i == j :
                continue
            list[j] = 0
    list[1] = 0

    return list.count(1)

print(solution(5))
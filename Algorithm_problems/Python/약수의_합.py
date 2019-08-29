def solution(n):
    answer = 0

    for i in range(1, n+1): # i는 1~n 까지
        if n % i == 0 : # n을 i로 나누었을때 나누어 떨어지면 약수
            answer += i
    return answer


'''
# 한 줄 코드
def solution(n):
	
    return n + sum([i for i in range(1, (n // 2) + 1) if n % i == 0])
'''
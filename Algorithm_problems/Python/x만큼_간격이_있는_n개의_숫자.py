def solution(x, n):
    answer = []

    for i in range(1, n+1):
        answer.append(x * i)
    return answer

'''
#한줄코드
def solution(x, n):

    return [i * x for i in range(1, n+1)]
'''
def solution(x, n):
    answer = []

    for i in range(1, n+1):
        answer.append(x * i)
    return answer

'''
#�����ڵ�
def solution(x, n):

    return [i * x for i in range(1, n+1)]
'''
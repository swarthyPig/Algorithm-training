def solution(n):
    answer = 0

    for i in range(1, n+1): # i�� 1~n ����
        if n % i == 0 : # n�� i�� ���������� ������ �������� ���
            answer += i
    return answer


'''
# �� �� �ڵ�
def solution(n):
	
    return n + sum([i for i in range(1, (n // 2) + 1) if n % i == 0])
'''
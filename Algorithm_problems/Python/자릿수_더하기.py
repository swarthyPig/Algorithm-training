def solution(n):

    n = list(str(n)) # ���ڸ� �߶� ����Ʈ�� �������(����)

    return sum(map(int,n)) # ����Ʈ ���� ���ڸ� int ������ ��ȯ�ϰ� ������

'''
# ���� �ڵ� ���ٷ� ���ڵ�
def solution(n):

    return sum(map(int,list(str(n))))
'''
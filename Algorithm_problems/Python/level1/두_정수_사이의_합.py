def solution(a, b):

    if a == b: # a,b�� ������ a ����
        return a

    elif a > b: # ���� ���ڰ� �� ���ں��� ũ�� swap
        a,b = b,a

    return sum(range(a,b+1)) # sum �Լ��� ����Ͽ� ����
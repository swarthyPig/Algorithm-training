def solution(n):

    length = n ** 0.5 # �Ǵ��� ���� �������� ����

    if length % 1 == 0: # ���� �������� 1�� ���������� 0���� �������� Ư������ ������

        return (length+1) ** 2

    return -1
def solution(num):
    count = 0

    while(num > 1): # num�� 1�� �ɶ����� �ݺ�

        if num % 2 == 0:
            num //= 2
        else :
            num = num * 3 + 1

        count += 1

        if count >= 500: # 500�� �ݺ��ص� 1�� ���� ����
            return -1

    return count
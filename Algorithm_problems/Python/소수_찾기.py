import math

# �����佺 �׳׽��� ä ���
# n�� ������ŭ 1�� ������ �迭�� ����� �Ҽ��� �ƴ� �κ��� 0���� ������ �������� 1�� ������ ī��Ʈ

def solution(n):
    list = [1] * (n+1) # n�� ������ŭ 1�� ������ �迭�� �����

    flag = int(math.sqrt(n)) + 2 # ������ �ݺ����� ����

    for i in range(2, flag): # 
        for j in range(0, len(list), i):
            if i == j : # �Ҽ� �϶�
                continue
            list[j] = 0 # �Ҽ��� �ƴ� �� 
    list[1] = 0 # 1�� �Ҽ��� �ƴϹǷ� 0 ����

    return list.count(1) # list �� 1�� ������ ī��Ʈ
def solution(n):

    n_count = bin(n).count('1') # �ڿ��� n�� 2������ ��ȯ�Ͽ� 1�� ������ ī��Ʈ

    while True:
        n = n+1 # n�� 1 ���� ������ 1�� ������Ű�鼭 ���ǿ� �´� ���� ã�ư�

        result_count = bin(n).count('1') # 1�� ���� ���� 2������ ��ȯ�Ͽ� 1�� ������ ī��Ʈ

        if n_count == result_count: # 1�� ������ ���Ͽ� ������ ��ȯ
            return n
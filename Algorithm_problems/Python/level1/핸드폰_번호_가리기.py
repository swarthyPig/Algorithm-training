def solution(phone_number):

    # ��ü ���ڿ����� ���� 4�ڸ��� �� ������ŭ ���� ä���
    # �� �� ������ ���� 4�ڸ��� �߰����ش�
    return '*' * (len(phone_number) - 4) + phone_number[-4:]
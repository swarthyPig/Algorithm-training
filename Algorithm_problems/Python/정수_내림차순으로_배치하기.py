def solution(n):

    # ���ڸ� ���ڷ� �ٲپ� �迭�� ���� �� �������� ����
    array = list(map(str, sorted(str(n), reverse=True))) 

    return int("".join(array)) # ���ڰ� ��� �迭�� ��ģ�� int ������ ���� �� ��ȯ
def solution(arr, divisor):
    answer = []

    for i in arr:
        if i % divisor == 0: # �־��� ���ڿ� ������ ��������
            answer.append(i) # list�� �߰�

    answer.sort() # list �� ����

    return answer if len(answer) != 0 else [-1] # list�� ��������� -1���� 
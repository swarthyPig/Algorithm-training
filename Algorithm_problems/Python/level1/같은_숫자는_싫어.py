def solution(arr):
    answer = []

    answer.append(arr[0]) # list�� ù���ڸ� �߰����ݴϴ�.

    for i in range(1,len(arr)): # list�� �ι�°���� ������ �ݺ��մϴ�.
        if arr[i] != arr[i-1]: # �Ǵ��� �ε����� �� ���� �ε����� ����������  
            answer.append(arr[i]) # ������ �ε����� list�� �߰��մϴ�

    return answer
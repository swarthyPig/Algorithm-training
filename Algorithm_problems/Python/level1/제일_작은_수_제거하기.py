def solution(arr):

    del arr[arr.index(min(arr))] # ���� �������� �ִ� �ε����� ã�Ƽ� �� ���� ����

    if len(arr) == 0:
        return [-1]

    return arr
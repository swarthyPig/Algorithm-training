def fibo(n):

    if n == 1 or n == 2: # ������ ù��°�� �ι�°�� 1�̴�
        return 1

    bottom_up = [None] * (n + 1) # ���� ��°�� ������ �ϳ� ũ���� list�� �����Ѵ�.
    bottom_up[1] = 1 # ����� ���� list�� 1��°�� 1�� �־��ش�.
    bottom_up[2] = 1 # ����� ���� list�� 2��°�� 1�� �־��ش�.

    for i in range(3, n + 1):
        bottom_up[i] = bottom_up[i-1] + bottom_up[i-2] # ������ ���� �迭�� ���� ä��������.

    return bottom_up[n]

def solution(n):

    return fibo(n) % 1234567
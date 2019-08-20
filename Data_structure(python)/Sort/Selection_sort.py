# ���������� ����(���� ������ �ִ� ��Ҹ� ��ȯ�ϱ� ����)
# ��� �� Ƚ�� (n*n - n)/2
def swap(a, idx1, idx2): # �迭 a�� idx1�� idx2�� ��ġ�� swap
    temp = a[idx1]
    a[idx1] = a[idx2]
    a[idx2] = temp


# (�ܼ�)��������
def selectionSort(a, n):
    for i in range(0, n-1, 1):
        min = i # ���� ���ĵ��� ���� �κп��� ���� ���� ����� �ε����� ���
        for j in range(i + 1, n, 1):
            if (a[j] < a[min]):
                min = j
        swap(a, i, min) # ���� ���ĵ��� ���� �κ��� ù ��ҿ� ���� ���� ��Ҹ� ��ȯ

print('-(�ܼ�)��������-')
nx = int(input('��ڼ� : '))

x = [None] * nx

for i in range(0, nx, 1):
    x[i] = int(input('x[{}] : '.format(i)))

selectionSort(x, nx)

print('�������� ���� �Ϸ�')

for i in x:
    print(i,end=' ')
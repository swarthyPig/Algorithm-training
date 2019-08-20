# ��������(�پ��ִ� ��Ҹ� ��ȯ �ϱ� ����)
# �̵� Ƚ���� ��� 3n(n-1)/4
def swap(a, idx1, idx2): # �迭 a�� idx1�� idx2�� ��ġ�� swap
    temp = a[idx1]
    a[idx1] = a[idx2]
    a[idx2] = temp

'''
# �������� - ����1(ȿ������ ������)
def bubbleSort(a, n):
    for i in range(n-1, 0, -1):
        for j in range(0, i, 1):
            if (a[j] > a[j + 1]):
                swap(a, j, j + 1)
'''
'''
# �������� - ����2(� �н����� ����� ��ȯ Ƚ���� 0�̸� ���̻� ���� ���ʿ�)
def bubbleSort(a, n):
    for i in range(n-1, 0, -1):
        exchange = 0 # ��ȯ Ƚ���� ī��Ʈ
        for j in range(0, i, 1):
            if (a[j] > a[j + 1]):
                swap(a, j, j + 1)
                exchange += 1
        if exchange == 0: # ��ȯ Ƚ���� 0�̸� ����
            break
'''
'''
# �������� - ����3(� ���� ���� ��ȯ�� ������� ������, �� ���� ���� ��Ҵ� �̹� ������ ��ģ ����)
def bubbleSort(a, n):
    k = n - 1 # ù��° pass������ ��� ��� �˻�
    while (k > 0):

        last = 0 # ���������� ��Ҹ� ��ȯ�� ��ġ

        for i in range(0, k, 1):
            if (a[i] > a[i + 1]):
                swap(a, i, i + 1)
                last = i # ���������� ��ȯ�� �� ��� ��� ������ ��� �ε��� ����
        k = last
'''

# ����� ��������(bidirection bubble sort)
# Ĭ���� ����(cocktail sort)
# ����Ŀ ����(shaker sort)
# Ȧ�� ��°�� pass�� ���� ���� ��Ҹ� �Ǿ�����, ¦�� ��°�� pass�� ���� ū ��Ҹ� �Ǿ�����.
# pass�� ��ĵ ������ ����� �ٲ۴�.
# ex) 9 1 3 4 6 7 8 �϶�, ȿ���� �������� ������ �ذ�
def bubbleSort(a, n):

    left = 0
    right = n - 1
    last = right

    while (left < right):
        for i in range(right, left, -1):
            if (a[i - 1] > a[i]):
                swap(a, i-1, i)
                last = i
        left = last

        for j in range(left, right, 1):
            if (a[j] > a[j + 1]):
                swap(a, j, j + 1)
                last = j
        right = last



print('-��������-')
nx = int(input('��ڼ� : '))

x = [None] * nx

for i in range(0, nx, 1):
    x[i] = int(input('x[{}] : '.format(i)))

bubbleSort(x, nx)

print('�������� ���� �Ϸ�')

for i in x:
    print(i,end=' ')
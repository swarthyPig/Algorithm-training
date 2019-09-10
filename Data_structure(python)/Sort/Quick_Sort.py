# �� ���� : ���� ���� ���� �˰��� ���� �ϳ��� �θ� ���ǰ� �ִ�.
# �ǹ�(Pivot)�� �������� ����
# ���� �̿����� �ʰ� �ָ� ������ �ִ� ��Ҹ� ��ȯ�ؾ� �ϹǷ� ���������� �ʴ�.

def swap(a, idx1, idx2): # �迭 a�� idx1�� idx2�� ��ġ�� swap
    temp = a[idx1]
    a[idx1] = a[idx2]
    a[idx2] = temp

def quickSort(a, left, right):
    pl = left # ���� Ŀ��
    pr = right # ������ Ŀ��
    x = a[(pl + pr) // 2] # �ǹ�

    while True :
        while (a[pl] < x) :
            pl += 1
        while (a[pr] > x) :
            pr -= 1
        if (pl <= pr):
            swap(a, pl, pr)
            pl += 1
            pr -= 1
        if pl <= pr :
            continue
        break

    if (left < pr):
        quickSort(a, left, pr)
    if (pl < right):
        quickSort(a, pl, right)

print('-�� ����-')
nx = int(input('��ڼ� : '))

x = [None] * nx

for i in range(0, nx, 1):
    x[i] = int(input('x[{}] : '.format(i)))

quickSort(x, 0, nx - 1)

print('�������� ���� �Ϸ�')

for i in x:
    print(i,end=' ')
# ������(������ �ִ� ��ҵ��� ���� �ڹٲ��� �ʱ⶧��)
# ��� �� Ƚ�� (n*n)/2

# (�ܼ�)��������
def insertSort(a, n):
    for i in range(1, n):
        j = i
        temp = a[i]
        while (j > 0 and a[j - 1] > temp) :
            a[j] = a[j - 1]
            j -= 1
        a[j] = temp

print('-(�ܼ�)��������-')
nx = int(input('��ڼ� : '))

x = [None] * nx

for i in range(0, nx, 1):
    x[i] = int(input('x[{}] : '.format(i)))

insertSort(x, nx)

print('�������� ���� �Ϸ�')

for i in x:
    print(i,end=' ')
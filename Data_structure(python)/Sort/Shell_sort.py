# ������ : �ܼ� ���� ������ ������ �츮�� ������ ������ ���� �˰���
# h-���� �� ������� ���ĵ� ���¿��� �������� ����

'''
# ���� 1
def shellsort(a, n):

    h = n//2 # �ʱ� ���а� ����
    while(h > 0):
        for i in range(h, n):
            j = i - h
            temp = a[i] # swap�� ���� �ӽ� ����
            while(j >= 0 and a[j] > temp):
                a[j + h] = a[j]
                j -= h
            a[j + h] = temp
        h //= 2 # ���� ������ ���а� ����
'''

# ���� 2
# ���а� h���� ���� ����� ���� �ʵ��� ����
def shellsort(a, n):

    # �ʱ� ���а� ����
    h = 1
    while (h < n // 9): # �ʱⰪ�� �ʹ� ũ�� ȿ���� ���� ������ n(��Ҽ�)�� 9�� �������� ���� �ʵ��� ����
        h = h * 3 + 1 # �ش� ������ ����ϸ� �� ���� �˰����� �����ϰ� ���� �� �ִ�.

    while(h > 0):
        for i in range(h, n):
            j = i - h
            temp = a[i] # swap�� ���� �ӽ� ����
            while(j >= 0 and a[j] > temp):
                a[j + h] = a[j]
                j -= h
            a[j + h] = temp
        h //= 3 # ���� ������ ���а� ����


print('-�� ����-')
nx = int(input('��ڼ� : '))

x = [None] * nx

for i in range(0, nx, 1):
    x[i] = int(input('x[{}] : '.format(i)))

shellsort(x, nx)

print('�������� ���� �Ϸ�')

for i in x:
    print(i,end=' ')
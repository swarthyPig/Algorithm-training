# ���� �˻��� �����Ͱ� Ű ������ �̹� ���� �Ǿ��ִٴ� ���� �Ͽ� �����
def binSearch(a, n, key): # ��Ҽ��� n�� �迭 a���� key�� ���� ��Ҹ� ���� �˻��ϴ� �޼ҵ�

    pl = 0 # �˻� ������ ù �ε���
    pr = n - 1 # �˻� ������ �� �ε���

    while(True): # ���̽��� do~while ��

        pc = int((pl + pr) / 2)  # �߾� ����� �ε���, ������ ĳ����

        if a[pc] == key:
            return pc  # �˻� ����
        elif a[pc] < key:
            pl = pc + 1  # �˻� ������ ���� �������� ����
        else:
            pr = pc - 1  # �˻� ������ ���� �������� ����

        if (pl <= pr) :
            continue
        break

    return -1 # �˻� ����

num = int(input('��Ҽ� : '))
array = [None] * num # ��Ҽ��� num�� �迭 ����

print('������������ �Է��ϼ���.')
array[0] = int(input('x[0] : ')) # ù ��� �Է�

for i in range(1, num, 1):
    while (True):  # ���̽��� do~while ��

        data = int(input('x[{}] : '.format(i)))
        array[i] = data

        if (array[i] < array[i-1]): # �ٷ� ���� ��Һ��� ������ �ٽ� �Է�
            continue
        break

key = int(input('�˻��� �� : ')) # ã�� key ���� �Է�

idx = binSearch(array, num, key) # �迭 array���� Ű ���� key �� ��Ҹ� �˻�

if idx == -1:
    print('ã�� ���� �����ϴ�.')
else:
    print('{}�� x[{}]�� �ֽ��ϴ�.'.format(key, idx))
def seqSearchWhile(a, n, key): # ��Ҽ��� n�� �迭 a���� key�� ���� ��Ҹ� ���� �˻��ϴ� �޼ҵ�

    # while ���
    i = 0

    while(True):

        if i == n:
            return -1 # �˻� ����(-1�� ��ȯ)

        if a[i] == key:
            return i # �˻� ����(�ε����� ��ȯ)

        i += 1

def seqSearchFor(a, n, key): # ��Ҽ��� n�� �迭 a���� key�� ���� ��Ҹ� ���� �˻��ϴ� �޼ҵ�

    # for ���
    for i in range(0, n, 1):
        if a[i] == key:
            return i # �˻� ����(�ε����� ��ȯ
    return -1 # �˻� ����(-1�� ��ȯ)


num = int(input('��Ҽ� : '))
array = [None] * num # ��Ҽ��� num�� �迭 ����

for i in range(0, num, 1):
    data = int(input('x[{}] : '.format(i)))
    array[i] = data

key = int(input('�˻��� �� : ')) # ã�� key ���� �Է�

idx = seqSearchFor(array, num, key) # �迭 array���� Ű ���� key �� ��Ҹ� �˻�

if idx == -1:
    print('ã�� ���� �����ϴ�.')
else:
    print('{}�� x[{}]�� �ֽ��ϴ�.'.format(key, idx))
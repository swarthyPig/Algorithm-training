def seqSearch(a, n, key): # ��Ҽ��� n�� �迭 a���� key�� ���� ��Ҹ� ���ʹ����� ���� �˻��ϴ� �޼ҵ�

    i = 0

    a[n] = key # ���ʸ� �߰�

    while(True):

        if a[i] == key:
            break
        i += 1
    return -1 if i == n else i


num = int(input('��Ҽ� : '))
add_sentinel_num = num + 1
array = [None] * add_sentinel_num # ��Ҽ��� num + 1 �� �迭 ����

for i in range(0, num, 1):
    data = int(input('x[{}] : '.format(i)))
    array[i] = data

key = int(input('�˻��� �� : ')) # ã�� key ���� �Է�

idx = seqSearch(array, num, key) # �迭 array���� Ű ���� key �� ��Ҹ� �˻�

if idx == -1:
    print('ã�� ���� �����ϴ�.')
else:
    print('{}�� x[{}]�� �ֽ��ϴ�.'.format(key, idx))
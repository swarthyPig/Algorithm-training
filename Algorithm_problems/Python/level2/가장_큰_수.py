from functools import cmp_to_key

def solution(numbers):

    numbers = list(map(str, numbers)) # ���ڿ� list�� ����

    # ������ �� �ڸ� ���ؼ� ���� ���� �������� ������
    # functools �� cmp_to_key ���
    numbers.sort(key = cmp_to_key(lambda x,y: int(x+y)-int(y+x)), reverse=True)

    return str(int(''.join(numbers))) # int�� �ѹ� �ٲ������ν� 0000 �϶� ��� �� �� ����

'''
# �ٸ�Ǯ��
def solution(numbers):
    numbers = list(map(str, numbers)) # # ���ڿ� list�� ����
    
    numbers.sort(key=lambda x: x*3, reverse=True) # ���ڸ� 3�� �ݺ��� ���� ���� ���� ��
    
    return str(int(''.join(numbers))) # int�� �ѹ� �ٲ������ν� 0000 �϶� ��� �� �� ����
'''
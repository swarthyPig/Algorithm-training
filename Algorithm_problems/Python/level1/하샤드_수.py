def solution(x):

    # ���ڸ� ���ڿ��� ��ȯ�Ͽ� �߶� list�� ���� ��
    # list�� �� ���Ҹ� ������ ��ȯ�� �� ���Ѵ�
    temp = list(map(int,list(str(x))))

    return True if x % sum(temp) == 0 else False

'''
#�� �� �ڵ�
def solution(x):

   return x % sum([int(i) for i in str(x)]) == 0
'''
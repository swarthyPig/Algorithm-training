# ��Ŭ���� ȣ������ ����Ͽ� �ִ� ������� ����
def euclidGcd(x, y): # ��������� ����
     if y == 0:
         return x
     else:
         return euclidGcd(y, x % y)

def solution(n, m):
    answer = [int(euclidGcd(n, m)), int((n*m)/euclidGcd(n, m))] # [�ִ�����, �ּҰ����]

    return answer
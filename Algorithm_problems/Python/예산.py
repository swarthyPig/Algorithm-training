def solution(d, budget):
    answer = 0 # ���� ������ �μ��� ����
    sum = 0 # �μ��� ��û �ݾ��� ������

    d.sort() # ��û�� �ݾ��� �������� ����

    for i in d:
        sum += i # �����μ����� sum������ ������
        if sum <= budget: # sum������ ����(budget)���� �۰ų� ������
            answer += 1 # ���� ������ �μ��� ������ 1 ����

    return answer

'''
# �ٸ�Ǯ��
def solution(d, budget):
    d.sort()
    while budget < sum(d):
        d.pop()
    return len(d)
'''
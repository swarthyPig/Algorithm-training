def solution(s):
    answer = ''

    arry = sorted(s, reverse=True) # ���ڿ��� ������������ ����

    for i in arry: # list�ȿ� ����ִ� ���ڸ� �ϳ��� ���ڿ��� ��ħ 
        answer += i

    return answer
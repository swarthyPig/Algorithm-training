def solution(s):
    answer = ''

    length = len(s)

    if length % 2 == 0: # ���ڿ��� ���̰� ¦���϶�
        answer = s[length//2-1:length//2+1]
    else : # ���ڿ��� ���̰� Ȧ�� �϶�
        answer = s[length//2]

    return answer
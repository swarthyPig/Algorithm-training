def solution(s):

    answer = True

    # ���ڸ� 0~9�ȿ� ���ؾߵȴ�
    number = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']

    if len(s) == 4 or len(s) == 6: # ���ڿ��� ���̰� 4 or 6
        for i in s :
            if i in number: # ���ڸ� �ϳ��� �Ǵ��ؼ� 0~9���̿� ������ False
                answer = True
            else :
                return False
    else :
        return False

    return answer
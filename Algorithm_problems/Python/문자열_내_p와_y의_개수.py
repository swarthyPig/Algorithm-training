def solution(s):

    s = s.lower() # ���ڿ��� �� ���ڸ� ��� �ҹ��ڷ� ����

    return True if s.count('p') == s.count('y') else False # p�� y�� ������ ī��Ʈ
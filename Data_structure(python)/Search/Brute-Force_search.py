def BFmatch(txt, pat): # Brute-Force������ ���ڿ��� �˻��ϴ� �޼ҵ�
    # (txt, pat) -> (���ڿ� ����, ã�� ���ڿ�)

    pt = 0 # ���ڿ� ������ Ŀ��(txt)
    pp = 0 # ã�� ���ڿ��� Ŀ��(pat)

    while pt != len(txt) and pp != len(pat):

        if txt[pt] == pat[pp] :
            pt += 1
            pp += 1
        else :
            pt = pt - pp + 1
            pp = 0

    if pp == len(pat):
        return pt - pp # �˻� ����
    return -1 # �˻� ����

s1 = input('���� ���ڿ� : ')
s2 = input('ã�� ���ڿ� : ')

idx = BFmatch(s1, s2)

if idx == -1 :
    print('ã�� ���ڿ��� �����ϴ�.')
else : 
    print('{}��° ���ں��� ��ġ �մϴ�'.format(idx + 1))

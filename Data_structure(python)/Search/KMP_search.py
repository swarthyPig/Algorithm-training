def kmpMatch(txt, pat): # KMP������ ���ڿ��� �˻��ϴ� �޼ҵ�
    # (txt, pat) -> (���ڿ� ����, ã�� ���ڿ�)

    pt = 1 # ���ڿ� ������ Ŀ��(txt)
    pp = 0 # ã�� ���ڿ��� Ŀ��(pat)
    skip_length = len(pat)+1
    skip = [None] * skip_length # �ǳʶٱ� ǥ

    # �ǳʶٱ� ǥ ����
    skip[pt] = 0
    while pt != len(pat):
        if pat[pt] == pat[pp]:
            pt += 1
            pp += 1
            skip[pt] = pp
        elif pp == 0 :
            pt += 1
            skip[pt] = pp
        else :
            pp = skip[pp]

    # �˻�
    pt = pp = 0

    while pt != len(txt) and pp != len(pat):

        if txt[pt] == pat[pp]:
            pt += 1
            pp += 1

        elif pp == 0:
            pt += 1

        else:
            pp = skip[pp]

    if pp == len(pat):
        return pt - pp # �˻� ����
    return -1 # �˻� ����

s1 = input('���� ���ڿ� : ')
s2 = input('ã�� ���ڿ� : ')

idx = kmpMatch(s1, s2)

if idx == -1 :
    print('ã�� ���ڿ��� �����ϴ�.')
else : 
    print('{}��° ���ں��� ��ġ �մϴ�'.format(idx + 1))

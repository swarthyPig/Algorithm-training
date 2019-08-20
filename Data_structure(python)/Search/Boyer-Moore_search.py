def bmMatch(txt, pat): # Boyer-Moore���� ���� ���ڿ� �˻�
    # (txt, pat) -> (���ڿ� ����, ã�� ���ڿ�)
    # str(object), object -> string
    # int(object), object -> int
    # float(object), object -> float
    # chr(i), �ƽ�Ű�ڵ� ���� ���� -> char
    # ord(ch), ���� -> int(�ƽ�Ű�ڵ� ��)

    pt = 0 # ���ڿ� ������ Ŀ��(txt)
    pp = 0 # ã�� ���ڿ��� Ŀ��(pat)
    txt_len = len(txt) # txt�� ���ڼ�
    pat_len = len(pat) # pat�� ���ڼ�
    skip_length = 65535 + 1
    skip = [None] * skip_length # skip ���̺�


    # �ǳʶٱ� ǥ ����
    for pt in range(0, 65536, 1):
        skip[pt] = pat_len

    for pt in range(0, pat_len-1, 1):
        skip[ord(pat[pt])] = pat_len - pt - 1 # pt == pat_len -1

    # �˻�
    while pt < txt_len :
        pp = pat_len -1 # pat�� �� ���ڿ� �ָ�
        while txt[pt] == pat[pp]:
            if pp == 0 :
                return pt
            pp -= 1
            pt -= 1
        if skip[ord(txt[pt])] > pat_len - pp :
            pt += skip[ord(txt[pt])]
        else :
            pt += pat_len - pp
    return -1


s1 = input('���� ���ڿ� : ')
s2 = input('ã�� ���ڿ� : ')

idx = bmMatch(s1, s2)

if idx == -1 :
    print('ã�� ���ڿ��� �����ϴ�.')
else :
    print('{}��° ���ں��� ��ġ �մϴ�'.format(idx + 1))

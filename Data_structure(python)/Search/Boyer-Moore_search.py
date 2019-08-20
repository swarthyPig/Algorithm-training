def bmMatch(txt, pat): # Boyer-Moore법에 의한 문자열 검색
    # (txt, pat) -> (문자열 원본, 찾을 문자열)
    # str(object), object -> string
    # int(object), object -> int
    # float(object), object -> float
    # chr(i), 아스키코드 범위 숫자 -> char
    # ord(ch), 문자 -> int(아스키코드 값)

    pt = 0 # 문자열 원본의 커서(txt)
    pp = 0 # 찾을 문자열의 커서(pat)
    txt_len = len(txt) # txt의 문자수
    pat_len = len(pat) # pat의 문자수
    skip_length = 65535 + 1
    skip = [None] * skip_length # skip 테이블


    # 건너뛰기 표 제작
    for pt in range(0, 65536, 1):
        skip[pt] = pat_len

    for pt in range(0, pat_len-1, 1):
        skip[ord(pat[pt])] = pat_len - pt - 1 # pt == pat_len -1

    # 검색
    while pt < txt_len :
        pp = pat_len -1 # pat의 끝 문자에 주목
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


s1 = input('원본 문자열 : ')
s2 = input('찾을 문자열 : ')

idx = bmMatch(s1, s2)

if idx == -1 :
    print('찾는 문자열이 없습니다.')
else :
    print('{}번째 문자부터 일치 합니다'.format(idx + 1))

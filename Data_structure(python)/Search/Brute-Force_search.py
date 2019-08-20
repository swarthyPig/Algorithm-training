def BFmatch(txt, pat): # Brute-Force법으로 문자열을 검색하는 메소드
    # (txt, pat) -> (문자열 원본, 찾을 문자열)

    pt = 0 # 문자열 원본의 커서(txt)
    pp = 0 # 찾을 문자열의 커서(pat)

    while pt != len(txt) and pp != len(pat):

        if txt[pt] == pat[pp] :
            pt += 1
            pp += 1
        else :
            pt = pt - pp + 1
            pp = 0

    if pp == len(pat):
        return pt - pp # 검색 성공
    return -1 # 검색 실패

s1 = input('원본 문자열 : ')
s2 = input('찾을 문자열 : ')

idx = BFmatch(s1, s2)

if idx == -1 :
    print('찾는 문자열이 없습니다.')
else : 
    print('{}번째 문자부터 일치 합니다'.format(idx + 1))

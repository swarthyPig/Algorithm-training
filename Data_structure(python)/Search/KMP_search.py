def kmpMatch(txt, pat): # KMP법으로 문자열을 검색하는 메소드
    # (txt, pat) -> (문자열 원본, 찾을 문자열)

    pt = 1 # 문자열 원본의 커서(txt)
    pp = 0 # 찾을 문자열의 커서(pat)
    skip_length = len(pat)+1
    skip = [None] * skip_length # 건너뛰기 표

    # 건너뛰기 표 제작
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

    # 검색
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
        return pt - pp # 검색 성공
    return -1 # 검색 실패

s1 = input('원본 문자열 : ')
s2 = input('찾을 문자열 : ')

idx = kmpMatch(s1, s2)

if idx == -1 :
    print('찾는 문자열이 없습니다.')
else : 
    print('{}번째 문자부터 일치 합니다'.format(idx + 1))

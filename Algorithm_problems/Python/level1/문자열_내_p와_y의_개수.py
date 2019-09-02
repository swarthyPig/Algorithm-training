def solution(s):

    s = s.lower() # 문자열의 각 문자를 모두 소문자로 변경

    return True if s.count('p') == s.count('y') else False # p와 y의 갯수를 카운트
def solution(s):
    answer = ''

    length = len(s)

    if length % 2 == 0: # 문자열의 길이가 짝수일때
        answer = s[length//2-1:length//2+1]
    else : # 문자열의 길이가 홀수 일때
        answer = s[length//2]

    return answer
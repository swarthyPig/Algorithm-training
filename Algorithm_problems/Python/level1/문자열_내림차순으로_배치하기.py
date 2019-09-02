def solution(s):
    answer = ''

    arry = sorted(s, reverse=True) # 문자열을 내림차순으로 정렬

    for i in arry: # list안에 담겨있는 문자를 하나의 문자열로 합침 
        answer += i

    return answer
# 방법 1
def solution(strings, n):
    
    answer = []

    # 먼저 list의 전 요소를 대상으로 정렬하고 그 후 지정된 인텍스의 값을 기준으로 정렬한다.
    answer = sorted(sorted(strings), key = lambda str : str[:][n])

    return answer


# 방법 2
def solution(strings, n):
    
    answer = []

    # 지정된 해당 인덱스의 문자를 기존 문자열 젤 앞단에 추가한다
    for i in range(len(strings)):
        strings[i] = strings[i][n]+strings[i]

    strings.sort() # 정렬

    for i in strings: # list의 각 원소의 추가된 문자를 제거한다.
        answer.append(i[1:])

    return answer
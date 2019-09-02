def solution(s):
    answer = ''

    array = s.split(" ", -1) # 공백까지 처리해 주기 위해서 limit 속성을 -1로 해줌(list의 다양성)

    for i in range(len(array)):
        for j in range(len(array[i])):
            if j % 2 == 0 : # 짝수 인덱스일때
                answer += array[i][j].upper() # 대문자로 바꿔준다
            else : # 홀수 인덱스일때
                answer += array[i][j].lower() # 소문자로 바꿔준다
        answer += ' ' # 단어마다 공백 추가

    return answer[:-1] # 문자열의 맨 뒤에 추가된 공백을 제거한다.
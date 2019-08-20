def solution(n):
    answer = ''

    for i in range(n): 

        if i % 2 == 0:
            answer += "¼ö"
        else:
            answer += "¹Ú"
    return answer
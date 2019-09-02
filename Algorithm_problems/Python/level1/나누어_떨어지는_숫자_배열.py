def solution(arr, divisor):
    answer = []

    for i in arr:
        if i % divisor == 0: # 주어진 숫자와 나누어 떨어지면
            answer.append(i) # list에 추가

    answer.sort() # list 를 정렬

    return answer if len(answer) != 0 else [-1] # list가 비어있으면 -1리턴 
def solution(answers):
    answer = [0, 0, 0] # 각 사람의 맞춘 문제 수를 저장
    result_answer = [] # 제출 답안이 저장될 list

    # 문제 수에 대응하여 배열의 길이 증설
    supoja1 = [1, 2, 3, 4, 5] * ((len(answers)//5)+1)
    supoja2 = [2, 1, 2, 3, 2, 4, 2, 5] * ((len(answers)//8)+1)
    supoja3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5] * ((len(answers)//10)+1)

    for i in range(len(answers)): # 문제와 답안을 비교하여 맞추면 1증가
        if answers[i] == supoja1[i]:
            answer[0] += 1
        if answers[i] == supoja2[i]:
            answer[1] += 1
        if answers[i] == supoja3[i]:
            answer[2] += 1

    for i in range(len(answer)): # 정답 배열과 정답배열의 가장 큰 인덱스를 비교하여 
        if answer[i] == max(answer): # 같으면 
            result_answer.append(i+1) # 최종 답안 배열에 추가함(인덱스를 추가(수포자))

    return result_answer
def solution(answers):
    answer = [0, 0, 0] # �� ����� ���� ���� ���� ����
    result_answer = [] # ���� ����� ����� list

    # ���� ���� �����Ͽ� �迭�� ���� ����
    supoja1 = [1, 2, 3, 4, 5] * ((len(answers)//5)+1)
    supoja2 = [2, 1, 2, 3, 2, 4, 2, 5] * ((len(answers)//8)+1)
    supoja3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5] * ((len(answers)//10)+1)

    for i in range(len(answers)): # ������ ����� ���Ͽ� ���߸� 1����
        if answers[i] == supoja1[i]:
            answer[0] += 1
        if answers[i] == supoja2[i]:
            answer[1] += 1
        if answers[i] == supoja3[i]:
            answer[2] += 1

    for i in range(len(answer)): # ���� �迭�� ����迭�� ���� ū �ε����� ���Ͽ� 
        if answer[i] == max(answer): # ������ 
            result_answer.append(i+1) # ���� ��� �迭�� �߰���(�ε����� �߰�(������))

    return result_answer
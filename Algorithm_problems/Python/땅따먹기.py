def solution(land):
    answer = [0]*4

    for i in range(1, len(land)):
        temp = land[i-1][:]
        for j in range(4):
            answer[j] = land[i][j] + max(temp[:j] + temp[j + 1:])
            land[i][j] = answer[j]

    return max(answer)
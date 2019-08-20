def solution(land):
    answer = [0]*4

    for i in range(1, len(land)):
        
        temp = land[i-1][:]
        
        for j in range(len(answer)):
            
            # a[start:] 특정 시작위치부터 끝까지
            # a[:end] 시작점부터 특정 위치까지 모두 가져오기
            answer[j] = land[i][j] + max(temp[:j] + temp[j + 1:])
            # 다음 스탭을 정하고 그 전 스탭의 list에서 선택 할 수 있는 가장 큰수를 더한다.
            
            land[i][j] = answer[j] # 기존 list에 각 스탭의 합의 경우의 수를 넣어준다.

    return max(answer)

def solution(board):

    max_area = 0 # 최대 넓이 삼각형의 한변의 길이를 담을 변수
    i_length = len(board)
    j_length = len(board[0])

    if (i_length < 2) or (j_length < 2): # 길이가 2미만인 배열
        if board[0][0] or board[1][0]: # 1이 1개라도 있으면
            max_area = 1 # 최대넓이가 1이된다.
    else :

        for i in range(1, i_length): # 인덱스 (1,1)부터 판단시작
            for j in range(1, j_length):
                if board[i][j]: # 해당 인덱스가 1이면
                    # 해당 인덱스에 위,좌,좌상단 세개의 인덱스의 값 중 최소값에 해당하는 값에 1을 더한값을 넣어줌
                    board[i][j] = min(board[i][j - 1], board[i - 1][j - 1], board[i - 1][j]) + 1
                    if max_area < board[i][j]: # 1을 더한 결과값이 현재 삼각형의 변의 길이보다 길면
                        max_area = board[i][j] # 최댓 값 갱신

    return max_area**2 # 가장 큰 삼각형의 넓이(최댓값의 제곱)
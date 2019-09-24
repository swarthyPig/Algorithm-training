def solution(heights):
    answer = [0] * len(heights) # 탑의 개수만큼 0으로 가득찬 배열을 만듭니다

    length = len(heights) # 탑의 개수

    for i in range(length-1): # 배열은 0부터 시작하므로 -1, 송신할 탑
        for j in range(i+1, length): # 송신 받을 탑
            if heights[length-i-1] < heights[length - j - 1] : # 제일 높은 탑의 밑탑부터 최하층 탑까지 돌면서 수신 받을 탑이 있는지 탐색
                answer[length-i-1] = length - j # 수신받을 탑이 있으면 탑의 인텍스를 넣어줌
                break
    return answer
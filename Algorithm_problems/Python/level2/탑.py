def solution(heights):
    answer = [0] * len(heights) # ž�� ������ŭ 0���� ������ �迭�� ����ϴ�

    length = len(heights) # ž�� ����

    for i in range(length-1): # �迭�� 0���� �����ϹǷ� -1, �۽��� ž
        for j in range(i+1, length): # �۽� ���� ž
            if heights[length-i-1] < heights[length - j - 1] : # ���� ���� ž�� ��ž���� ������ ž���� ���鼭 ���� ���� ž�� �ִ��� Ž��
                answer[length-i-1] = length - j # ���Ź��� ž�� ������ ž�� ���ؽ��� �־���
                break
    return answer
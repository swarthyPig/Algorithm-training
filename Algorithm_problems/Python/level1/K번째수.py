def solution(array, commands):

    answer = []

    for i in commands:
        result = sorted(array[i[0] - 1:i[1]]) # 배열을 정해진 구간 만큼 자른 후 정렬합니다.
        answer.append(result[i[2] - 1]) # 주어진 인덱스의 숫자를 배열에 추가합니다.

    return answer
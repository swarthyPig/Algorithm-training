def solution(array, commands):

    answer = []

    for i in commands:
        result = sorted(array[i[0] - 1:i[1]]) # �迭�� ������ ���� ��ŭ �ڸ� �� �����մϴ�.
        answer.append(result[i[2] - 1]) # �־��� �ε����� ���ڸ� �迭�� �߰��մϴ�.

    return answer
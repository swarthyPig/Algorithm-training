def solution(land):
    answer = [0]*4

    for i in range(1, len(land)):

        temp = land[i-1][:]

        for j in range(len(answer)):

            # a[start:] Ư�� ������ġ���� ������
            # a[:end] ���������� Ư�� ��ġ���� ��� ��������
            answer[j] = land[i][j] + max(temp[:j] + temp[j + 1:])
            # ���� ������ ���ϰ� �� �� ������ list���� ���� �� �� �ִ� ���� ū���� ���Ѵ�.

            land[i][j] = answer[j] # ���� list�� �� ������ ���� ����� ���� �־��ش�.

    return max(answer)

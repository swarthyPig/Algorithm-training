def solution(s):
    answer = ''

    array = s.split(" ", -1) # ������� ó���� �ֱ� ���ؼ� limit �Ӽ��� -1�� ����(list�� �پ缺)

    for i in range(len(array)):
        for j in range(len(array[i])):
            if j % 2 == 0 : # ¦�� �ε����϶�
                answer += array[i][j].upper() # �빮�ڷ� �ٲ��ش�
            else : # Ȧ�� �ε����϶�
                answer += array[i][j].lower() # �ҹ��ڷ� �ٲ��ش�
        answer += ' ' # �ܾ�� ���� �߰�

    return answer[:-1] # ���ڿ��� �� �ڿ� �߰��� ������ �����Ѵ�.
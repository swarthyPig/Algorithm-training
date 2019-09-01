def solution(n, lost, reserve): # (�� �л���, ���� ���� ����, ���� ���� ����)

    total_student = [0] * (n+2) # �л� �� +2 ��ŭ 0�� ä�� �迭�� �����.(�糡�� 1�� �߰��ϴ� ������ �ε��� ��� ���̸� ����)

    # 0 �϶� : ���о���, ���� ������ ����
    # 1 �϶� : ������ ����
    # -1�϶� : ���� ���� ����
    for i in lost: # ���� �������� �л�, ü������ ���� ����
        total_student[i] -= 1

    for i in reserve: # ������ ���� �ִ� �л�
        total_student[i] += 1

    for i in range(1, len(total_student)): # �糡�� �ε����� ������

        if total_student[i] == 1: # ������ ���� �ִ� �л�
            if total_student[i - 1] == -1: # �ڽ��� ���� ��ȣ �л��� ���� �ʿ������� Ȯ��
                total_student[i - 1] += 1 # �����ְ� ���� +1
                total_student[i] -= 1 # �����־����Ƿ� ���� -1

            elif total_student[i + 1] == -1: # �ڽ��� ������ ��ȣ �л��� ���� �ʿ������� Ȯ��
                total_student[i + 1] += 1 # �����ְ� ���� +1
                total_student[i] -= 1 # �����־����Ƿ� ���� -1

    # �� ���� �ε����� �����ϰ� -1(���� ���� ����)�� �ε����� ī��Ʈ �Ͽ� ��ü �л������� ����
    return n - total_student[1:-1].count(-1)


'''
def solution(n, lost, reserve): # (�� �л���, ���� ���� ����, ���� ���� ����)

    # set�� �������� ����Ͽ� lost�� reserve �迭�� ������ �ߺ��� ��������
    reserve_temp = set(reserve) - set(lost)
    lost_temp = set(lost) - set(reserve)

    for i in reserve_temp:
        if i - 1 in lost_temp: # �ش��ȣ ������ �л��� ���� �ʿ��ϸ� ������ �����ְ� list���� ����
            lost_temp.remove(i - 1)
        elif i + 1 in lost_temp:# �ش��ȣ ������ �л��� ���� �ʿ��ϸ� ������ �����ְ� list���� ����
            lost_temp.remove(i + 1)

    return n - len(lost_temp) # ��ü �л� ������ ���� ������ ���� �л����� �� ���� ����
'''






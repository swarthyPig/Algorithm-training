def solution(a, b):

    months = ['FRI', 'SAT', 'SUN', 'MON','TUE','WED','THU'] # ����
    months_num = [31,29,31,30,31,30,31,31,30,31,30] # 2016�� �����̱� ������ 2���� 29�ϱ���

    totalDays = 0 # ����� �� �ϼ��� ����

    for i in range(a-1): # ����� ���� �ϼ��� ����
        totalDays += months_num[i]
    totalDays += b # �ش� ������ ����� �ϼ��� ����

    answer = totalDays % 7 - 1 # �������� 7�� �̹Ƿ� 7�� ������ �迭�� 0���� �����ϴ� Ư���� ���� -1 ����

    return months[answer]
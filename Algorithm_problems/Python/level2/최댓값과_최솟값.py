def solution(s):
    answer = [] # ��� ���� ���� �迭

    array = list(map(int, s.split(' '))) # ���ڿ��� ������ �������� �ڸ� �� ������ ����Ʈ�� ��ȯ

    answer.append(str(min(array))) # �ּҰ��� �߰�
    answer.append(str(max(array))) # �ִ밪�� �߰�
 
    return ' '.join(answer) # ����Ʈ�� ���Ҹ� �ٿ��� ���ڿ��� ���� ��ȯ
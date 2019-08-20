def solution(s):
    str_stack = []

    for i in s:
        if i == '(':
            str_stack.append(i) # Ž�� �� '('�������� ���ÿ� �߰��մϴ�.
            
        else: # ')'�� ��������
            if len(str_stack): # ���ÿ� �����Ͱ� ������
                str_stack.pop() # ������ ����
            else: # ������ �������
                return False # False ����

    return False if len(str_stack) else True  # ������ ��������� True �ϳ��̻� ������False ����
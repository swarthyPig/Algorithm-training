def solution(s, n):
    answer = ''

    n = n % 26 # ���ĺ��� ������ 26���̴�

    array = list(s) # ���ڸ� �ϳ��� �߶� list�� ��ȯ

    for i in range(len(array)):
        if array[i] == " " : # ���� ó��(������ �о �����̴�)
            answer += " "

        elif array[i].isupper(): # �빮�� ó��
            
            if ord(array[i]) + n > 90: # �о����� Z�� �Ѿ��
                answer += chr((ord(array[i]) + n - 26)) # �Ѿ�� �ʵ��� ó��
                
            else : # �о����� Z�� �Ѿ�� ���� ��
                answer += chr(ord(array[i]) + n) 

        else : # �ҹ��� ó��
            
            if ord(array[i]) + n > 122: # �о����� z�� �Ѿ��
                answer += chr((ord(array[i]) + n - 26)) # �Ѿ�� �ʵ��� ó��
                
            else : # �о����� z�� �Ѿ�� ���� ��
                answer += chr(ord(array[i]) + n)

    return answer
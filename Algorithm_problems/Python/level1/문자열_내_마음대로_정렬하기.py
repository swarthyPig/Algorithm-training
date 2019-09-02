# ��� 1
def solution(strings, n):
    
    answer = []

    # ���� list�� �� ��Ҹ� ������� �����ϰ� �� �� ������ ���ؽ��� ���� �������� �����Ѵ�.
    answer = sorted(sorted(strings), key = lambda str : str[:][n])

    return answer


# ��� 2
def solution(strings, n):
    
    answer = []

    # ������ �ش� �ε����� ���ڸ� ���� ���ڿ� �� �մܿ� �߰��Ѵ�
    for i in range(len(strings)):
        strings[i] = strings[i][n]+strings[i]

    strings.sort() # ����

    for i in strings: # list�� �� ������ �߰��� ���ڸ� �����Ѵ�.
        answer.append(i[1:])

    return answer
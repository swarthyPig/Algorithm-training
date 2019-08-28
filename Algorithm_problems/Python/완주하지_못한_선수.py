def solution(participant, completion):
    
    # �� list�� ũ�⸦ �����ϰ� ����� ���ؼ� completion list�� ����
    # ���� �� �� �ڿ� �� �� �ִ� ���ڸ� �������(����: ������ �̸��� �ִ� 20��)
    completion.append('z'*20)  

    participant.sort() # participant ����
    completion.sort() # completion ����

    for i in range(len(completion)): # �� list�� ���� �����Ƿ� �ƹ� list�� �־ ������
        if participant[i] != completion[i]: # ������ list�� ���Ҹ� ���ʷ� ���ϴٰ� ���� �ٸ���
            return participant[i] # �ٸ� ���Ҹ� ��������


'''
# collections ��� ���
import collections

def solution(participant, completion):
    answer = collections.Counter(participant) - collections.Counter(completion)
    return list(answer.keys())[0]

'''
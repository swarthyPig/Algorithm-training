def solution(participant, completion):
    
    # 두 list의 크기를 동일하게 만들기 위해서 completion list의 끝에
    # 정렬 후 젤 뒤에 갈 수 있는 문자를 집어넣음(조건: 선수의 이름은 최대 20자)
    completion.append('z'*20)  

    participant.sort() # participant 정렬
    completion.sort() # completion 정렬

    for i in range(len(completion)): # 두 list의 길이 같으므로 아무 list나 넣어도 무방함
        if participant[i] != completion[i]: # 각각의 list의 원소를 차례로 비교하다가 서로 다르면
            return participant[i] # 다른 원소를 리턴해줌


'''
# collections 모듈 사용
import collections

def solution(participant, completion):
    answer = collections.Counter(participant) - collections.Counter(completion)
    return list(answer.keys())[0]

'''
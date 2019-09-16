def solution(s):
    answer = [] # 결과 값을 담을 배열

    array = list(map(int, s.split(' '))) # 문자열을 공백을 기준으로 자른 후 정수형 리스트로 변환

    answer.append(str(min(array))) # 최소값을 추가
    answer.append(str(max(array))) # 최대값을 추가
 
    return ' '.join(answer) # 리스트의 원소를 붙여서 문자열로 만들어서 반환
def solution(arr):
    answer = []

    answer.append(arr[0]) # list의 첫숫자를 추가해줍니다.

    for i in range(1,len(arr)): # list의 두번째부터 끝까지 반복합니다.
        if arr[i] != arr[i-1]: # 판단할 인덱스와 그 전의 인덱스가 같지않으면  
            answer.append(arr[i]) # 그전의 인덱스를 list에 추가합니다

    return answer
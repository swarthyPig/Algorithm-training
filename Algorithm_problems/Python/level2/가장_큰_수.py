from functools import cmp_to_key

def solution(numbers):

    numbers = list(map(str, numbers)) # 문자열 list로 변경

    # 문자의 앞 뒤를 더해서 나온 값을 기준으로 정렬함
    # functools 의 cmp_to_key 사용
    numbers.sort(key = cmp_to_key(lambda x,y: int(x+y)-int(y+x)), reverse=True)

    return str(int(''.join(numbers))) # int로 한번 바꿔줌으로써 0000 일때 방어 할 수 있음

'''
# 다른풀이
def solution(numbers):
    numbers = list(map(str, numbers)) # # 문자열 list로 변경
    
    numbers.sort(key=lambda x: x*3, reverse=True) # 문자를 3번 반복한 값에 대해 정렬 함
    
    return str(int(''.join(numbers))) # int로 한번 바꿔줌으로써 0000 일때 방어 할 수 있음
'''
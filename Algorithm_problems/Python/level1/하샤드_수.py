def solution(x):

    # 숫자를 문자열로 변환하여 잘라서 list에 넣은 후
    # list의 각 원소를 정수로 변환한 뒤 더한다
    temp = list(map(int,list(str(x))))

    return True if x % sum(temp) == 0 else False

'''
#한 줄 코드
def solution(x):

   return x % sum([int(i) for i in str(x)]) == 0
'''
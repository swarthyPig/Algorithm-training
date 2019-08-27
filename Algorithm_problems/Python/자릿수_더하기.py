def solution(n):

    n = list(str(n)) # 숫자를 잘라서 리스트로 만들어줌(문자)

    return sum(map(int,n)) # 리스트 속의 문자를 int 형으로 변환하고 더해줌

'''
# 위의 코드 한줄로 숏코딩
def solution(n):

    return sum(map(int,list(str(n))))
'''
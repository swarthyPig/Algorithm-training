def solution(a, b):

    if a == b: # a,b가 같으면 a 리턴
        return a

    elif a > b: # 시작 숫자가 끝 숫자보다 크면 swap
        a,b = b,a

    return sum(range(a,b+1)) # sum 함수를 사용하여 덧셈
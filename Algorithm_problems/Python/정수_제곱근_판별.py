def solution(n):

    length = n ** 0.5 # 판단할 수의 제곱근을 구함

    if length % 1 == 0: # 구한 제곱근을 1로 나누었을때 0으로 떨어지면 특정수의 제곱임

        return (length+1) ** 2

    return -1
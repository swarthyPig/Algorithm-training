def solution(n):

    n_count = bin(n).count('1') # 자연수 n을 2진수로 변환하여 1의 개수를 카운트

    while True:
        n = n+1 # n을 1 더한 값부터 1씩 증가시키면서 조건에 맞는 값을 찾아감

        result_count = bin(n).count('1') # 1씩 더한 값을 2진수로 변환하여 1의 개수를 카운트

        if n_count == result_count: # 1의 개수를 비교하여 같으면 반환
            return n
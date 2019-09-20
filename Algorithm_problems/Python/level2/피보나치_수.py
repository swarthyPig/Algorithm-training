def fibo(n):

    if n == 1 or n == 2: # 수열의 첫번째와 두번째는 1이다
        return 1

    bottom_up = [None] * (n + 1) # 구할 번째의 수보다 하나 크도록 list를 생성한다.
    bottom_up[1] = 1 # 계산을 위해 list의 1번째에 1을 넣어준다.
    bottom_up[2] = 1 # 계산을 위해 list의 2번째에 1을 넣어준다.

    for i in range(3, n + 1):
        bottom_up[i] = bottom_up[i-1] + bottom_up[i-2] # 수열에 따라 배열에 값을 채워나간다.

    return bottom_up[n]

def solution(n):

    return fibo(n) % 1234567
def solution(num):
    count = 0

    while(num > 1): # num이 1이 될때까지 반복

        if num % 2 == 0:
            num //= 2
        else :
            num = num * 3 + 1

        count += 1

        if count >= 500: # 500번 반복해도 1이 되지 않음
            return -1

    return count
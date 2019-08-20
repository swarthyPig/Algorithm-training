# 1~n 까지의 소수의 갯수

def solution(n):
    prime = [2, 3]

    for i in range(5, n+1, 2):
        flag = False
        j = 1
        while(prime[j] * prime[j] <= i):
            if (i % prime[j] == 0):
                flag = True
                break
            j += 1

        if flag == False:
            prime.append(i)

    return prime


print(solution(31))

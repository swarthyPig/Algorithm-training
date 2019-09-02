# 유클리드 호제법을 사용하여 최대 공약수를 구함
def euclidGcd(x, y): # 재귀적으로 구현
     if y == 0:
         return x
     else:
         return euclidGcd(y, x % y)

def solution(n, m):
    answer = [int(euclidGcd(n, m)), int((n*m)/euclidGcd(n, m))] # [최대공약수, 최소공배수]

    return answer
def solution(d, budget):
    answer = 0 # 지원 가능한 부서의 개수
    sum = 0 # 부서별 신청 금액을 더해줌

    d.sort() # 신청한 금액을 오름차순 정렬

    for i in d:
        sum += i # 작은부서부터 sum변수에 더해줌
        if sum <= budget: # sum변수가 예산(budget)보다 작거나 같으면
            answer += 1 # 지원 가능한 부서의 개수를 1 더함

    return answer

'''
# 다른풀이
def solution(d, budget):
    d.sort()
    while budget < sum(d):
        d.pop()
    return len(d)
'''
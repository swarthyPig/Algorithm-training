# 안정적임(붙어있는 요소를 교환 하기 때문)
# 이동 횟수의 평균 3n(n-1)/4
def swap(a, idx1, idx2): # 배열 a의 idx1과 idx2의 위치를 swap
    temp = a[idx1]
    a[idx1] = a[idx2]
    a[idx2] = temp

'''
# 버블정렬 - 버전1(효율성이 떨어짐)
def bubbleSort(a, n):
    for i in range(n-1, 0, -1):
        for j in range(0, i, 1):
            if (a[j] > a[j + 1]):
                swap(a, j, j + 1)
'''
'''
# 버블정렬 - 버전2(어떤 패스에서 요소의 교환 횟수가 0이면 더이상 정렬 불필요)
def bubbleSort(a, n):
    for i in range(n-1, 0, -1):
        exchange = 0 # 교환 횟수를 카운트
        for j in range(0, i, 1):
            if (a[j] > a[j + 1]):
                swap(a, j, j + 1)
                exchange += 1
        if exchange == 0: # 교환 횟수가 0이면 정지
            break
'''
'''
# 버블정렬 - 버전3(어떤 시점 이후 교환이 수행되지 않을때, 그 보다 앞쪽 요소는 이미 정렬을 마친 상태)
def bubbleSort(a, n):
    k = n - 1 # 첫번째 pass에서는 모든 요소 검사
    while (k > 0):

        last = 0 # 마지막으로 요소를 교환한 위치

        for i in range(0, k, 1):
            if (a[i] > a[i + 1]):
                swap(a, i, i + 1)
                last = i # 마지막으로 교환한 두 요소 가운데 오른쪽 요소 인덱스 저장
        k = last
'''

# 양방향 버블정렬(bidirection bubble sort)
# 칵테일 정렬(cocktail sort)
# 셰이커 정렬(shaker sort)
# 홀수 번째의 pass는 가장 작은 요소를 맨앞으로, 짝수 번째의 pass는 가장 큰 요소를 맨앞으로.
# pass의 스캔 방향을 교대로 바꾼다.
# ex) 9 1 3 4 6 7 8 일때, 효율이 떨어지는 문제를 해결
def bubbleSort(a, n):

    left = 0
    right = n - 1
    last = right

    while (left < right):
        for i in range(right, left, -1):
            if (a[i - 1] > a[i]):
                swap(a, i-1, i)
                last = i
        left = last

        for j in range(left, right, 1):
            if (a[j] > a[j + 1]):
                swap(a, j, j + 1)
                last = j
        right = last



print('-버블정렬-')
nx = int(input('요솟수 : '))

x = [None] * nx

for i in range(0, nx, 1):
    x[i] = int(input('x[{}] : '.format(i)))

bubbleSort(x, nx)

print('오름차순 정렬 완료')

for i in x:
    print(i,end=' ')
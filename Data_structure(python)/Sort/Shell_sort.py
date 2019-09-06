# 셸정렬 : 단순 삽입 정렬의 장점은 살리고 단점을 보완한 정렬 알고리즘
# h-정렬 후 어느정도 정렬된 상태에서 삽입정렬 수행

'''
# 버전 1
def shellsort(a, n):

    h = n//2 # 초기 증분값 설정
    while(h > 0):
        for i in range(h, n):
            j = i - h
            temp = a[i] # swap을 위한 임시 변수
            while(j >= 0 and a[j] > temp):
                a[j + h] = a[j]
                j -= h
            a[j + h] = temp
        h //= 2 # 다음 스텝의 증분값 설정
'''

# 버전 2
# 증분값 h값이 서로 배수가 되지 않도록 변경
def shellsort(a, n):

    # 초기 증분값 설정
    h = 1
    while (h < n // 9): # 초기값이 너무 크면 효과가 없기 때문에 n(요소수)을 9로 나눈값을 넘지 않도록 설정
        h = h * 3 + 1 # 해당 수열을 사용하면 셸 정렬 알고리즘을 간단하게 만들 수 있다.

    while(h > 0):
        for i in range(h, n):
            j = i - h
            temp = a[i] # swap을 위한 임시 변수
            while(j >= 0 and a[j] > temp):
                a[j + h] = a[j]
                j -= h
            a[j + h] = temp
        h //= 3 # 다음 스텝의 증분값 설정


print('-셸 정렬-')
nx = int(input('요솟수 : '))

x = [None] * nx

for i in range(0, nx, 1):
    x[i] = int(input('x[{}] : '.format(i)))

shellsort(x, nx)

print('오름차순 정렬 완료')

for i in x:
    print(i,end=' ')
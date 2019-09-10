# 퀵 정렬 : 가장 빠른 정렬 알고리즘 중의 하나로 널리 사용되고 있다.
# 피벗(Pivot)을 기준으로 나눔
# 서로 이웃하지 않고 멀리 떨어져 있는 요소를 교환해야 하므로 안정적이지 않다.

def swap(a, idx1, idx2): # 배열 a의 idx1과 idx2의 위치를 swap
    temp = a[idx1]
    a[idx1] = a[idx2]
    a[idx2] = temp

def quickSort(a, left, right):
    pl = left # 왼쪽 커서
    pr = right # 오른쪽 커서
    x = a[(pl + pr) // 2] # 피벗

    while True :
        while (a[pl] < x) :
            pl += 1
        while (a[pr] > x) :
            pr -= 1
        if (pl <= pr):
            swap(a, pl, pr)
            pl += 1
            pr -= 1
        if pl <= pr :
            continue
        break

    if (left < pr):
        quickSort(a, left, pr)
    if (pl < right):
        quickSort(a, pl, right)

print('-퀵 정렬-')
nx = int(input('요솟수 : '))

x = [None] * nx

for i in range(0, nx, 1):
    x[i] = int(input('x[{}] : '.format(i)))

quickSort(x, 0, nx - 1)

print('오름차순 정렬 완료')

for i in x:
    print(i,end=' ')
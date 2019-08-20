# 안정적이지 않음(서로 떨어져 있는 요소를 교환하기 때문)
# 평균 비교 횟수 (n*n - n)/2
def swap(a, idx1, idx2): # 배열 a의 idx1과 idx2의 위치를 swap
    temp = a[idx1]
    a[idx1] = a[idx2]
    a[idx2] = temp


# (단순)선택정렬
def selectionSort(a, n):
    for i in range(0, n-1, 1):
        min = i # 아직 정렬되지 않은 부분에서 가장 작은 요소의 인덱스를 기록
        for j in range(i + 1, n, 1):
            if (a[j] < a[min]):
                min = j
        swap(a, i, min) # 아직 정렬되지 않은 부분의 첫 요소와 가장 작은 요소를 교환

print('-(단순)선택정렬-')
nx = int(input('요솟수 : '))

x = [None] * nx

for i in range(0, nx, 1):
    x[i] = int(input('x[{}] : '.format(i)))

selectionSort(x, nx)

print('오름차순 정렬 완료')

for i in x:
    print(i,end=' ')
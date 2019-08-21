# 안정적(떨어져 있는 요소들이 서로 뒤바뀌지 않기때문)
# 평균 비교 횟수 (n*n)/2

# 특징
# 장점 : 정렬을 마쳤거나 정렬을 마친 상태에 가까우면 정렬 속도가 매우 빨라집니다
# 단점 : 삽입할 위치가 멀리 떨어져 있으면 이동(대입)해야 하는 횟수가 많아집니다.

# (단순)삽입정렬
def insertSort(a, n):
    for i in range(1, n):
        j = i
        temp = a[i]
        while (j > 0 and a[j - 1] > temp) :
            a[j] = a[j - 1]
            j -= 1
        a[j] = temp

print('-(단순)삽입정렬-')
nx = int(input('요솟수 : '))

x = [None] * nx

for i in range(0, nx, 1):
    x[i] = int(input('x[{}] : '.format(i)))

insertSort(x, nx)

print('오름차순 정렬 완료')

for i in x:
    print(i,end=' ')
    

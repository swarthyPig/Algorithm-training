# 이진 검색은 데이터가 키 값으로 이미 정렬 되어있다는 전제 하에 적용됨
def binSearch(a, n, key): # 요소수가 n인 배열 a에서 key와 같은 요소를 이진 검색하는 메소드

    pl = 0 # 검색 범위의 첫 인덱스
    pr = n - 1 # 검색 범위의 끝 인덱스

    while(True): # 파이썬의 do~while 문

        pc = int((pl + pr) / 2)  # 중앙 요소의 인덱스, 정수로 캐스팅

        if a[pc] == key:
            return pc  # 검색 성공
        elif a[pc] < key:
            pl = pc + 1  # 검색 범위를 뒤쪽 절반으로 좁힘
        else:
            pr = pc - 1  # 검색 범위를 앞쪽 절반으로 좁힘

        if (pl <= pr) :
            continue
        break

    return -1 # 검색 실패

num = int(input('요소수 : '))
array = [None] * num # 요소수가 num인 배열 생성

print('오름차순으로 입력하세요.')
array[0] = int(input('x[0] : ')) # 첫 요소 입력

for i in range(1, num, 1):
    while (True):  # 파이썬의 do~while 문

        data = int(input('x[{}] : '.format(i)))
        array[i] = data

        if (array[i] < array[i-1]): # 바로 앞의 요소보다 작으면 다시 입력
            continue
        break

key = int(input('검색할 값 : ')) # 찾을 key 값을 입력

idx = binSearch(array, num, key) # 배열 array에서 키 값이 key 인 요소를 검색

if idx == -1:
    print('찾는 값이 없습니다.')
else:
    print('{}는 x[{}]에 있습니다.'.format(key, idx))
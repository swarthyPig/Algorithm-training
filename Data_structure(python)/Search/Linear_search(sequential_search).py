def seqSearchWhile(a, n, key): # 요소수가 n인 배열 a에서 key와 같은 요소를 선형 검색하는 메소드

    # while 사용
    i = 0

    while(True):

        if i == n:
            return -1 # 검색 실패(-1을 반환)

        if a[i] == key:
            return i # 검색 성공(인덱스를 반환)

        i += 1

def seqSearchFor(a, n, key): # 요소수가 n인 배열 a에서 key와 같은 요소를 선형 검색하는 메소드

    # for 사용
    for i in range(0, n, 1):
        if a[i] == key:
            return i # 검색 성공(인덱스를 반환
    return -1 # 검색 실패(-1을 반환)


num = int(input('요소수 : '))
array = [None] * num # 요소수가 num인 배열 생성

for i in range(0, num, 1):
    data = int(input('x[{}] : '.format(i)))
    array[i] = data

key = int(input('검색할 값 : ')) # 찾을 key 값을 입력

idx = seqSearchFor(array, num, key) # 배열 array에서 키 값이 key 인 요소를 검색

if idx == -1:
    print('찾는 값이 없습니다.')
else:
    print('{}는 x[{}]에 있습니다.'.format(key, idx))
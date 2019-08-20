def seqSearch(a, n, key): # 요소수가 n인 배열 a에서 key와 같은 요소를 보초법으로 선형 검색하는 메소드

    i = 0

    a[n] = key # 보초를 추가

    while(True):

        if a[i] == key:
            break
        i += 1
    return -1 if i == n else i


num = int(input('요소수 : '))
add_sentinel_num = num + 1
array = [None] * add_sentinel_num # 요소수가 num + 1 인 배열 생성

for i in range(0, num, 1):
    data = int(input('x[{}] : '.format(i)))
    array[i] = data

key = int(input('검색할 값 : ')) # 찾을 key 값을 입력

idx = seqSearch(array, num, key) # 배열 array에서 키 값이 key 인 요소를 검색

if idx == -1:
    print('찾는 값이 없습니다.')
else:
    print('{}는 x[{}]에 있습니다.'.format(key, idx))
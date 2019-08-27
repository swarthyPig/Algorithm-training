def solution(n):

    # 숫자를 문자로 바꾸어 배열에 넣은 후 내림차순 정렬
    array = list(map(str, sorted(str(n), reverse=True))) 

    return int("".join(array)) # 문자가 담긴 배열을 합친후 int 형으로 변경 후 반환
def solution(arr):

    del arr[arr.index(min(arr))] # 가장 작은수가 있는 인덱스를 찾아서 그 수를 제거

    if len(arr) == 0:
        return [-1]

    return arr
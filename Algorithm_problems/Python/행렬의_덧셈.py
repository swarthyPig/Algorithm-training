def solution(arr1, arr2):

    for i in range(len(arr1)):
        for j in range(len(arr1[i])):
            arr1[i][j] += arr2[i][j] # ���� ù��° list�� �ι�° list�� ���� ���ذ���.

    return arr1


'''
#numpy ���

import numpy as np

def solution(arr1, arr2):

    arr1 = np.array(arr1)
    arr2 = np.array(arr2)

    answer = arr1 + arr2

    return answer.tolist()
'''
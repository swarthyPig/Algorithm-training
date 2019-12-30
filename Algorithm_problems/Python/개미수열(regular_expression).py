# 개미수열
'''
1, 11, 12, 1121, 122111, 112213, 12221131, 1123123111, ...
'''
import re

def antArray(n):
    curr = '1'
    for i in range(n):

        if len(curr) == 1:
            print("1")

        # \d : 숫자와 매치, [0-9]와 동일한 표현식이다.
        # * : 앞 패턴이 0개 이상이어야 함
        match = re.findall(r"(\d)(\1*)", curr) # curr 의 각 단어를 정규식과 매치해서 리스트로 돌려준다
        curr = ''.join([k + str(len(k + y)) for k, y in match])

        print(curr)

antArray(10)
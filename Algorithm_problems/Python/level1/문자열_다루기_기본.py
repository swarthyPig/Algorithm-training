def solution(s):

    answer = True

    # 숫자면 0~9안에 속해야된다
    number = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']

    if len(s) == 4 or len(s) == 6: # 문자열의 길이가 4 or 6
        for i in s :
            if i in number: # 문자를 하나씩 판단해서 0~9사이에 없으면 False
                answer = True
            else :
                return False
    else :
        return False

    return answer
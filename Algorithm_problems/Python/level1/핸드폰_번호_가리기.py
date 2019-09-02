def solution(phone_number):

    # 전체 문자열에서 뒤의 4자리를 뺀 갯수만큼 별로 채우고
    # 그 후 나머지 뒤의 4자리를 추가해준다
    return '*' * (len(phone_number) - 4) + phone_number[-4:]
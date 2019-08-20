def solution(s):
    str_stack = []

    for i in s:
        if i == '(':
            str_stack.append(i) # 탐색 중 '('를만나면 스택에 추가합니다.
            
        else: # ')'를 만났을때
            if len(str_stack): # 스택에 데이터가 있으면
                str_stack.pop() # 데이터 제거
            else: # 스택이 비었으면
                return False # False 리턴

    return False if len(str_stack) else True  # 스택이 비어있으면 True 하나이상 있으면False 리턴
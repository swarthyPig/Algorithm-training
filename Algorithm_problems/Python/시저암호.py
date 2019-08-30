def solution(s, n):
    answer = ''

    n = n % 26 # 알파벳의 갯수는 26개이다

    array = list(s) # 문자를 하나씩 잘라서 list로 변환

    for i in range(len(array)):
        if array[i] == " " : # 공백 처리(공백은 밀어도 공백이다)
            answer += " "

        elif array[i].isupper(): # 대문자 처리
            
            if ord(array[i]) + n > 90: # 밀었을때 Z를 넘어가면
                answer += chr((ord(array[i]) + n - 26)) # 넘어가지 않도록 처리
                
            else : # 밀었을때 Z를 넘어가지 않을 때
                answer += chr(ord(array[i]) + n) 

        else : # 소문자 처리
            
            if ord(array[i]) + n > 122: # 밀었을때 z를 넘어가면
                answer += chr((ord(array[i]) + n - 26)) # 넘어가지 않도록 처리
                
            else : # 밀었을때 z를 넘어가지 않을 때
                answer += chr(ord(array[i]) + n)

    return answer
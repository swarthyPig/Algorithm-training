# 개미수열
'''
1, 11, 12, 1121, 122111, 112213, 12221131, 1123123111, ...
'''
def antArray(n):
    mylist = [1]

    if (len(mylist) == 1):
        print("1번째:[1]")

    for i in range(n):
        result = []
        count = 0 # 숫자가 반복될 때의 갯수 
        num = 1 # 판단할 숫자

        for j in range(len(mylist)):

            if mylist[j] == num: # 숫자가 반복될 때
                count += 1

            if mylist[j] != num: # 숫자가 다를 때
                result.append(num)
                result.append(count)
                num = mylist[j] # 판단할 숫자를 변경
                count = 1 # 숫자가 다를 때 매칭이 되지 않기 때문에 count를 1로 초기화

            if j == len(mylist) - 1: # 끝날 때(배열의 마지막 인덱스 처리)
                result.append(num)
                result.append(count)

        print(f"{i+2}번째:{result}")
        mylist = result[:]

antArray(10)

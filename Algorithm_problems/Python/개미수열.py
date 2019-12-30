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
        count = 0
        finalTemp = 0 # 회전이 끝났을 때 판단할 count
        num = 1 # 판단할 숫자

        for j in range(len(mylist)):

            if mylist[j] == num: # 숫자가 반복될 때
                count += 1
                finalTemp = count # 숫자가 반복된 상태에서 끝났을 때 의 count

            if mylist[j] != num: # 숫자가 다른 상태에서 끝났을 때 의 count
                result.append(num)
                result.append(count)
                num = mylist[j] # 판단할 숫자를 변경
                count = 1
                finalTemp = count # 다른 상태에서 끝났을때의 count

            if j == len(mylist) - 1: # 끝날 때
                result.append(num)
                result.append(finalTemp)

        print(f"{i+2}번째:{result}")
        mylist = result[:]

antArray(10)
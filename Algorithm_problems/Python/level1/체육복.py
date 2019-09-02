def solution(n, lost, reserve): # (총 학생수, 옷을 도난 당함, 여벌 옷이 있음)

    total_student = [0] * (n+2) # 학생 수 +2 만큼 0을 채운 배열을 만든다.(양끝에 1씩 추가하는 이유는 인덱스 계산 용이를 위해)

    # 0 일때 : 여분없음, 도난 당하지 않음
    # 1 일때 : 여분이 있음
    # -1일때 : 옷을 도난 당함
    for i in lost: # 옷을 도난당한 학생, 체육수업 참가 못함
        total_student[i] -= 1

    for i in reserve: # 여분의 옷이 있는 학생
        total_student[i] += 1

    for i in range(1, len(total_student)): # 양끝의 인덱스를 제외함

        if total_student[i] == 1: # 여분의 옷이 있는 학생
            if total_student[i - 1] == -1: # 자신의 왼쪽 번호 학생이 옷이 필요한지를 확인
                total_student[i - 1] += 1 # 빌려주고 값을 +1
                total_student[i] -= 1 # 빌려주었으므로 값을 -1

            elif total_student[i + 1] == -1: # 자신의 오른쪽 번호 학생이 옷이 필요한지를 확인
                total_student[i + 1] += 1 # 빌려주고 값을 +1
                total_student[i] -= 1 # 빌려주었으므로 값을 -1

    # 양 끝의 인덱스를 제외하고 -1(수업 참가 못함)인 인덱스를 카운트 하여 전체 학생수에서 빼줌
    return n - total_student[1:-1].count(-1)


'''
def solution(n, lost, reserve): # (총 학생수, 옷을 도난 당함, 여벌 옷이 있음)

    # set의 차집합을 사용하여 lost와 reserve 배열의 서로의 중복을 제거해줌
    reserve_temp = set(reserve) - set(lost)
    lost_temp = set(lost) - set(reserve)

    for i in reserve_temp:
        if i - 1 in lost_temp: # 해당번호 왼쪽의 학생이 옷이 필요하면 있으면 빌려주고 list에서 제거
            lost_temp.remove(i - 1)
        elif i + 1 in lost_temp:# 해당번호 오른쪽 학생이 옷이 필요하면 있으면 빌려주고 list에서 제거
            lost_temp.remove(i + 1)

    return n - len(lost_temp) # 전체 학생 수에서 옷을 빌리지 못한 학생수를 뺀 값을 리턴
'''






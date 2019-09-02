def solution(a, b):

    months = ['FRI', 'SAT', 'SUN', 'MON','TUE','WED','THU'] # 요일
    months_num = [31,29,31,30,31,30,31,31,30,31,30] # 2016년 윤년이기 때문에 2월이 29일까지

    totalDays = 0 # 경과한 총 일수를 저장

    for i in range(a-1): # 경과한 달의 일수를 더함
        totalDays += months_num[i]
    totalDays += b # 해당 날자의 경과한 일수를 더함

    answer = totalDays % 7 - 1 # 일주일은 7일 이므로 7로 나눈뒤 배열의 0부터 시작하는 특성에 따라 -1 해줌

    return months[answer]
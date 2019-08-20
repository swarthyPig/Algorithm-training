class Queue:
    num = 0 # 현재 데이터 수
    que = [] # 큐 본체

    def __init__(self, max): # max : 큐 용량
        self.max = max

    def enqueue(self, data): # 큐에 데이터를 넣음

        if self.is_full():
            print('Queue is full')
        else:
            self.que.append(data)
            self.num += 1

    def dequeue(self): # 큐에서 데이터를 꺼냄

        if self.is_empty():
            print('Queue is empty')
        else:
            data = self.que[0]
            del (self.que[0])
            self.num -= 1

            return data

    def peek(self):  # 맨 꼭대기의(머리) 큐 데이터 확인

        if self.is_empty():
            print('Queue is empty')
        else:
            return self.que[self.num-1]  # 위아래 같은 코드
            # return self.que[-1]

    def indexOf(self, data):  # 큐속에서 찾으려는 데이터 위치 검색(못찾으면 -1 반환)

        for i in range(0, self.num, 1):
            if self.que[i] == data:
                return i
        return -1

    def clear(self):  # 큐 초기화
        del self.que[:]  # 모두 같은 기능을 하는 코드
        # self.que.clear()
        # self.que[:] = []
        self.num = 0
        return '큐가 초기화 되었습니다.'

    def capacity(self):  # 큐의 용량 확인
        return self.max

    def size(self):  # 큐에 현재 저장된 요소의 총 개수
        return self.num

    def is_empty(self):  # 큐가 비어있는지 확인

        return self.num <= 0

    def is_full(self):  # 큐가 가득 차 있는지 확인

        return self.num >= self.max

    def dump(self):  # 큐 안의 모든 데이터 머리 -> 꼬리 순으로 출력
        if self.is_empty():
            print('Queue is empty')
        else:
            for i in range(0, self.num, 1):
                print(self.que[i], end=' ')
        return 'end'

# Queue 객체 생성
init_que_size = int(input('큐의 크기를 입력해주세요 : '))
queue = Queue(init_que_size)
print('\n')

while True : #프로그램 시작

    print('현재 데이터 수 : {}/{}'.format(queue.size(), queue.capacity()))

    menu = int(input('(1)enqueue (2)dequeue (3)peek (4)dump (5)search (6)clear (7)info (0)exit : '))

    if menu == 0: # exit
        break

    if menu == 1: # enqueue
        data = int(input('데이터 : '))
        print('\n')
        queue.enqueue(data)

    elif menu == 2: # dequeue
        deque = queue.dequeue()
        print('dequeue 한 데이터는 {} 입니다.{}'.format(deque, '\n'))

    elif menu == 3: # peek
        peek = queue.peek()
        print('peek 한 데이터는 {} 입니다.{}'.format(peek, '\n'))

    elif menu == 4: # dump
        print(queue.dump(),end='\n\n')

    elif menu == 5: # search
        searchData = int(input('데이터 : '))
        print('')
        result = queue.indexOf(searchData)

        if result >= 0:
            print('해당 데이터는 {} 번째에 있습니다.{}'.format(result+1, '\n'))
        else :
            print('해당 데이터가 없습니다.',end='\n\n')

    elif menu == 6: # clear
        print(queue.clear(),end='\n\n')


    elif menu == 7: # info
        print('용량 : {}'.format(queue.capacity()))
        print('데이터 수 : {}'.format(queue.size()))
        print(('비어 있습니다.') if queue.is_empty() else ('비어있지 않습니다.'))
        print(('가득 찼습니다.') if queue.is_full() else ('가득 자치 않았습니다.'),end='\n\n')

    else :
        print('0~7사이의 숫자만 입력해주세요.',end='\n\n')
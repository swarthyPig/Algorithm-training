class Stack:

    items = [] # 스택을 저장할 리스트
    top = -1 # 스택 포인터

    def __init__(self, max_num): # 스택의 크기를 받음
        self.max_num = max_num

    def push(self, data): # 스택에 데이터를 넣음

        if self.is_full() :
            print('Stack is full')
        else :
            self.items.append(data)
            self.top += 1

    def pop(self): # 스택의 데이터를 삭제하고 반환

        if self.is_empty() :
            print('Stack is empty')
        else :
            data = self.items[self.top]
            del(self.items[self.top])
            self.top -= 1
            return data

    def indexOf(self, data): # 스택속에서 찾으려는 데이터 위치 검색(못찾으면 -1 반환)

        for i in range(self.top, -1, -1):
            if self.items[i] == data:
                return i
        return -1

    def clear(self): # 스택 초기화
        del self.items[:] # 모두 같은 기능을 하는 코드
        #self.items.clear()
        #self.items[:] = []
        self.top = -1
        return '스택이 초기화 되었습니다.'

    def size(self): # 스택에 현재 저장된 요소의 총 개수
        return self.top + 1

    def capacity(self): # 스택의 용량 확인
        return self.max_num

    def peek(self): # 맨 꼭대기의 스택 데이터 확인
        if self.is_empty() :
            print('Stack is empty')
        else :
            return self.items[self.top] # 위아래 같은 코드
            # return self.items[-1]

    def is_empty(self): # 스택이 비어있는지 확인

        return self.top <= -1

    def is_full(self): # 스택이 가득 차 있는지 확인

        return self.top + 1 >= self.max_num

    def dump(self): # 스택 안의 모든 데이터 바닥 -> 꼭대기 순으로 출력
        if self.is_empty() :
            print('Stack is empty')
        else :
            for i in range(0, self.top+1, 1):
                print(self.items[i],end=' ')
        return 'end'

# stack 객체 생성
init_stack_size = int(input('스택의 크기를 입력해주세요 : '))
stack = Stack(init_stack_size)
print('\n')

while True : #프로그램 시작

    print('현재 데이터 수 : {}/{}'.format(stack.size(), stack.capacity()))

    menu = int(input('(1)push (2)pop (3)peek (4)dump (5)search (6)clear (7)info (0)exit : '))

    if menu == 0 : # exit
        break

    if menu == 1: # push
        data = int(input('데이터 : '))
        print('\n')
        stack.push(data)

    elif menu == 2: # pop
        pop = stack.pop()
        print('pop 한 데이터는 {} 입니다.{}'.format(pop, '\n'))

    elif menu == 3: # peek
        peek = stack.peek()
        print('peek 한 데이터는 {} 입니다.{}'.format(peek, '\n'))

    elif menu == 4: # dump
        print(stack.dump(),end='\n\n')

    elif menu == 5: # search
        searchData = int(input('데이터 : '))
        print('')
        result = stack.indexOf(searchData)

        if result >= 0:
            print('꼭대기부터 {} 번째에 있습니다.{}'.format(stack.size()-result, '\n'))
        else :
            print('해당 데이터가 없습니다.',end='\n\n')

    elif menu == 6: # clear
        print(stack.clear(),end='\n\n')


    elif menu == 7: # info
        print('용량 : {}'.format(stack.capacity()))
        print('데이터 수 : {}'.format(stack.size()))
        print(('비어 있습니다.') if stack.is_empty() else ('비어있지 않습니다.'))
        print(('가득 찼습니다.') if stack.is_full() else ('가득 자치 않았습니다.'),end='\n\n')

    else :
        print('0~7사이의 숫자만 입력해주세요.',end='\n\n')
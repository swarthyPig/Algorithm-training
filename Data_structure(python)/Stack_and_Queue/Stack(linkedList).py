# linkedList로 stack을 구현할 때 앞에서부터 데이터를 추가하면 추가할 때마다 첫 노드부터 끝까지 돌아야 되므로 효율성이 떨어진다.
# 그래서 거꾸로 구현한다.

class Node(object):
    def __init__(self, value=None, pointer=None): # 데이터와, 노드의 주소값
        self.value = value # 데이터
        self.pointer = pointer # 다음 노드의 주소값

class Stack(object):
    def __init__(self):
        self.head = None # stack의 가장 윗부분을 가리킴
        self.count = 0 # 총 스택의 사이즈

    def isEmpty(self): # 비어있는지 확인
        return not bool(self.head) # 비어있으면 True를 리턴

    def push(self, item): # 데이터를 추가
        self.head= Node(item, self.head) # 새로운 노드박스를 추가(데이터, 위치)
        self.count += 1 # 갯수를 1 증가

    def pop(self): # 데이터 제거
        if self.count > 0 and self.head: # 데이터가 있으면
            node = self.head # 전 노드를 가리킴
            self.head= node.pointer # 삭제할 데이터의 위치를 head에 넣어줌
            self.count -= 1 # 갯수를 1 감소
            return node.value # 삭제한 노드의 데이터를 리턴
        else :
            print("Stack is empty.")

    def peek(self): # 맨 끝 데이터 조회
        if self.count > 0 and self.head: # 데이터가 있으면
            return self.head.value # 해당 노드의 데이터를 리턴
        else :
            print("Stack is empty.")

    def size(self): # 현재 스택의 사이즈
        return self.count # 스택의 사이즈를 리턴

    def _printList(self): # 전체 스택 데이터
        node = self.head # 전 노드를 가리킴
        while node: # 0이되면 종료
            print(node.value, end=' ')
            node = node.pointer # 노드의 위치
        print()

    def clear(self):
        self.head = None
        return '스택이 초기화 되었습니다.'

if __name__ =="__main__":
    stack = Stack()# 객체 생성

    while True:  # 프로그램 시작

        print('현재 데이터 수 : {}'.format(stack.size()))

        menu = int(input('(1)push (2)pop (3)peek (4)dump (5)clear (6)info (0)exit : '))

        if menu == 0:  # exit
            break

        if menu == 1:  # push
            data = int(input('데이터 : '))
            print('\n')
            stack.push(data)

        elif menu == 2:  # pop
            pop = stack.pop()
            print('pop 한 데이터는 {} 입니다.{}'.format(pop, '\n'))

        elif menu == 3:  # peek
            peek = stack.peek()
            print('peek 한 데이터는 {} 입니다.{}'.format(peek, '\n'))

        elif menu == 4:  # dump
            stack._printList()

        elif menu == 5:  # clear
            print(stack.clear(), end='\n\n')

        elif menu == 6:  # info
            print(('비어 있습니다.') if stack.isEmpty() else ('비어있지 않습니다.'))

        else:
            print('0~5사이의 숫자만 입력해주세요.', end='\n\n')




class Queue:
    num = 0 # ���� ������ ��
    que = [] # ť ��ü

    def __init__(self, max): # max : ť �뷮
        self.max = max

    def enqueue(self, data): # ť�� �����͸� ����

        if self.is_full():
            print('Queue is full')
        else:
            self.que.append(data)
            self.num += 1

    def dequeue(self): # ť���� �����͸� ����

        if self.is_empty():
            print('Queue is empty')
        else:
            data = self.que[0]
            del (self.que[0])
            self.num -= 1

            return data

    def peek(self):  # �� �������(�Ӹ�) ť ������ Ȯ��

        if self.is_empty():
            print('Queue is empty')
        else:
            return self.que[self.num-1]  # ���Ʒ� ���� �ڵ�
            # return self.que[-1]

    def indexOf(self, data):  # ť�ӿ��� ã������ ������ ��ġ �˻�(��ã���� -1 ��ȯ)

        for i in range(0, self.num, 1):
            if self.que[i] == data:
                return i
        return -1

    def clear(self):  # ť �ʱ�ȭ
        del self.que[:]  # ��� ���� ����� �ϴ� �ڵ�
        # self.que.clear()
        # self.que[:] = []
        self.num = 0
        return 'ť�� �ʱ�ȭ �Ǿ����ϴ�.'

    def capacity(self):  # ť�� �뷮 Ȯ��
        return self.max

    def size(self):  # ť�� ���� ����� ����� �� ����
        return self.num

    def is_empty(self):  # ť�� ����ִ��� Ȯ��

        return self.num <= 0

    def is_full(self):  # ť�� ���� �� �ִ��� Ȯ��

        return self.num >= self.max

    def dump(self):  # ť ���� ��� ������ �Ӹ� -> ���� ������ ���
        if self.is_empty():
            print('Queue is empty')
        else:
            for i in range(0, self.num, 1):
                print(self.que[i], end=' ')
        return 'end'

# Queue ��ü ����
init_que_size = int(input('ť�� ũ�⸦ �Է����ּ��� : '))
queue = Queue(init_que_size)
print('\n')

while True : #���α׷� ����

    print('���� ������ �� : {}/{}'.format(queue.size(), queue.capacity()))

    menu = int(input('(1)enqueue (2)dequeue (3)peek (4)dump (5)search (6)clear (7)info (0)exit : '))

    if menu == 0: # exit
        break

    if menu == 1: # enqueue
        data = int(input('������ : '))
        print('\n')
        queue.enqueue(data)

    elif menu == 2: # dequeue
        deque = queue.dequeue()
        print('dequeue �� �����ʹ� {} �Դϴ�.{}'.format(deque, '\n'))

    elif menu == 3: # peek
        peek = queue.peek()
        print('peek �� �����ʹ� {} �Դϴ�.{}'.format(peek, '\n'))

    elif menu == 4: # dump
        print(queue.dump(),end='\n\n')

    elif menu == 5: # search
        searchData = int(input('������ : '))
        print('')
        result = queue.indexOf(searchData)

        if result >= 0:
            print('�ش� �����ʹ� {} ��°�� �ֽ��ϴ�.{}'.format(result+1, '\n'))
        else :
            print('�ش� �����Ͱ� �����ϴ�.',end='\n\n')

    elif menu == 6: # clear
        print(queue.clear(),end='\n\n')


    elif menu == 7: # info
        print('�뷮 : {}'.format(queue.capacity()))
        print('������ �� : {}'.format(queue.size()))
        print(('��� �ֽ��ϴ�.') if queue.is_empty() else ('������� �ʽ��ϴ�.'))
        print(('���� á���ϴ�.') if queue.is_full() else ('���� ��ġ �ʾҽ��ϴ�.'),end='\n\n')

    else :
        print('0~7������ ���ڸ� �Է����ּ���.',end='\n\n')
class Queue:
    num = 0 # ���� ������ ��
    front = 0 # ť�� ù��° ��� Ŀ��, �� ó�� ����� �ε���
    rear = 0 # ť�� ������ ��� Ŀ��, �� �� ����� �ϳ� ���� �ε���(���� ��Ҹ� ��ť�� ��ġ�� �̸� ����)

    def __init__(self, max): # max : ť �뷮
        self.max = max
        self.que = [None] * self.max  # ť ��ü�� �뷮��ŭ ����

    def enqueue(self, data): # ť�� �����͸� ����

        if self.is_full():
            print('Queue is full')
        else:
            self.que[self.rear] = data
            self.rear += 1
            self.num += 1

        if self.rear == max:
            self.rear = 0

    def dequeue(self): # ť���� �����͸� ����

        if self.is_empty():
            print('Queue is empty')
        else:
            data = self.que[self.front]
            self.front += 1
            self.num -= 1

            if self.front == max:
                self.front = 0

            return data

    def peek(self):  # front �����͸� �鿩�ٺ�

        if self.is_empty():
            print('Queue is empty')
        else:
            return self.que[self.front]

    def indexOf(self, data):  # ť�ӿ��� ã������ ������ ��ġ �˻�(��ã���� -1 ��ȯ)

        for i in range(0, self.num, 1):
            idx = (i + self.front) % self.max
            if self.que[idx] == data:
                return idx
        return -1

    def clear(self):  # ť �ʱ�ȭ
        self.num = self.front = self.rear = 0
        return 'ť�� �ʱ�ȭ �Ǿ����ϴ�.'

    def capacity(self):  # ť�� �뷮 Ȯ��
        return self.max

    def size(self):  # ť�� ���� ����� ����� �� ����
        return self.num

    def is_empty(self):  # ť�� ����ִ��� Ȯ��

        return self.num <= 0

    def is_full(self):  # ť�� ���� �� �ִ��� Ȯ��

        return self.num >= self.max

    def dump(self):  # ť ���� ��� ������ ����Ʈ->���� ������ ���
        if self.is_empty():
            print('Queue is empty')
        else:
            for i in range(0, self.num, 1):
                print(self.que[(i + self.front) % self.max], end=' ')
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

    elif menu == 3: # peek(front �����͸� ������)
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
class Stack:

    items = [] # ������ ������ ����Ʈ
    top = -1 # ���� ������

    def __init__(self, max_num): # ������ ũ�⸦ ����
        self.max_num = max_num

    def push(self, data): # ���ÿ� �����͸� ����

        if self.is_full() :
            print('Stack is full')
        else :
            self.items.append(data)
            self.top += 1

    def pop(self): # ������ �����͸� �����ϰ� ��ȯ

        if self.is_empty() :
            print('Stack is empty')
        else :
            data = self.items[self.top]
            del(self.items[self.top])
            self.top -= 1
            return data

    def indexOf(self, data): # ���üӿ��� ã������ ������ ��ġ �˻�(��ã���� -1 ��ȯ)

        for i in range(self.top, -1, -1):
            if self.items[i] == data:
                return i
        return -1

    def clear(self): # ���� �ʱ�ȭ
        del self.items[:] # ��� ���� ����� �ϴ� �ڵ�
        #self.items.clear()
        #self.items[:] = []
        self.top = -1
        return '������ �ʱ�ȭ �Ǿ����ϴ�.'

    def size(self): # ���ÿ� ���� ����� ����� �� ����
        return self.top + 1

    def capacity(self): # ������ �뷮 Ȯ��
        return self.max_num

    def peek(self): # �� ������� ���� ������ Ȯ��
        if self.is_empty() :
            print('Stack is empty')
        else :
            return self.items[self.top] # ���Ʒ� ���� �ڵ�
            # return self.items[-1]

    def is_empty(self): # ������ ����ִ��� Ȯ��

        return self.top <= -1

    def is_full(self): # ������ ���� �� �ִ��� Ȯ��

        return self.top + 1 >= self.max_num

    def dump(self): # ���� ���� ��� ������ �ٴ� -> ����� ������ ���
        if self.is_empty() :
            print('Stack is empty')
        else :
            for i in range(0, self.top+1, 1):
                print(self.items[i],end=' ')
        return 'end'

# stack ��ü ����
init_stack_size = int(input('������ ũ�⸦ �Է����ּ��� : '))
stack = Stack(init_stack_size)
print('\n')

while True : #���α׷� ����

    print('���� ������ �� : {}/{}'.format(stack.size(), stack.capacity()))

    menu = int(input('(1)push (2)pop (3)peek (4)dump (5)search (6)clear (7)info (0)exit : '))

    if menu == 0 : # exit
        break

    if menu == 1: # push
        data = int(input('������ : '))
        print('\n')
        stack.push(data)

    elif menu == 2: # pop
        pop = stack.pop()
        print('pop �� �����ʹ� {} �Դϴ�.{}'.format(pop, '\n'))

    elif menu == 3: # peek
        peek = stack.peek()
        print('peek �� �����ʹ� {} �Դϴ�.{}'.format(peek, '\n'))

    elif menu == 4: # dump
        print(stack.dump(),end='\n\n')

    elif menu == 5: # search
        searchData = int(input('������ : '))
        print('')
        result = stack.indexOf(searchData)

        if result >= 0:
            print('�������� {} ��°�� �ֽ��ϴ�.{}'.format(stack.size()-result, '\n'))
        else :
            print('�ش� �����Ͱ� �����ϴ�.',end='\n\n')

    elif menu == 6: # clear
        print(stack.clear(),end='\n\n')


    elif menu == 7: # info
        print('�뷮 : {}'.format(stack.capacity()))
        print('������ �� : {}'.format(stack.size()))
        print(('��� �ֽ��ϴ�.') if stack.is_empty() else ('������� �ʽ��ϴ�.'))
        print(('���� á���ϴ�.') if stack.is_full() else ('���� ��ġ �ʾҽ��ϴ�.'),end='\n\n')

    else :
        print('0~7������ ���ڸ� �Է����ּ���.',end='\n\n')
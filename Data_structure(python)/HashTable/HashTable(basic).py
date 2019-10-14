class Node(object):
    def __init__(self, value=None, pointer=None):
        self.value = value
        self.pointer = pointer

    def getData(self): # 값에 접근
        return self.value

    def getNext(self): # 주소에 접근
        return self.pointer

    def setData(self, newdata): # 새로운 데이터 추가
        self.value = newdata

    def setNext(self, newpointer): # 새로운 주소 추가
        self.pointer = newpointer

class LinkedListFIFO(object):
    def __init__(self):
        self.head = None # 머리
        self.tail = None # 꼬리
        self.length = 0 # 길이

    # 헤드부터 각 노드의 값을 출력
    def _printList(self):
        Node = self.head # 시작점 설정

        while Node:
            print(Node.value, end=' ') # 해당 노드의 데이터 출력
            Node = Node.pointer # 다음 노드로 감
        print()

    # 첫 번째 위치에 노드를 추가
    def _addFirst(self, value):
        self.length = 1
        node = Node(value)
        self.head = node
        self.tail = node

    # 첫 번째 위치의 노드를 삭제
    def _deleteFirst(self):
        self.length = 0
        self.head = None
        self.tail = None
        print("연결 리스트가 비어있습니다.")

    # 새 노드를 추가
    def _add(self, value):
        self.length += 1
        node = Node(value)

        if self.tail: # tail이 있다면
            self.tail.pointer = node # tail의 다음 노드는 새 노드를 가리키고
        self.tail = node # 테일은 새 노드를 가리킨다.

    # 새 노드를 추가
    def addNode(self, value):
        if not self.head: # 비어 있으면
            self._addFirst(value) # 첫 번째 노드에 데이터 추가
        else: # 비어있지않으면
            self._add(value) # 그 다음 노드에 추가


    # 인덱스로 노드를 찾는다.
    def _find(self, index):
        prev = None
        Node = self.head

        i = 0
        while Node and i < index:
            prev = Node
            Node = Node.pointer
            i += 1
        return Node, prev, i

    # 값으로 노드를 찾는다
    def _find_by_value(self, value):
        prev = None
        Node = self.head
        found = False

        while Node and not found:
            if Node.value == value:
                found = True
            else:
                prev = Node
                Node = Node.pointer
        return Node, prev, found

    # 인덱스에 해당하는 노드를 삭제
    def deleteNode(self, index):
        if not self.head or not self.head.pointer:
            self._deleteFirst()
        else:
            Node, prev, i = self._find(index)
            if i == index and Node:
                self.length -= 1
                if i == 0 or not prev:
                    self.head = Node.pointer
                    self.tail = Node.pointer
                else:
                    prev.pointer = Node.pointer
            else:
                print(f"인덱스 {index}에 해당하는 노드가 없습니다")

    # 값에 해당하는 노드를 삭제
    def deleteNodeByValue(self,value):
        if not self.head or not self.head.pointer:
            self._deleteFirst()
        else :
            Node, prev, i = self._find_by_value(value)
            if Node and Node.value == value:
                self.length -= 1
                if i == 0 or not prev:
                    self.head = Node.pointer
                    self.tail = Node.pointer
                else:
                    prev.pointer = Node.pointer
            else:
                print(f"값 {index}에 해당하는 노드가 없습니다")

class HashTableLL(object):
    def __init__(self, size):
        self.size = size # 슬롯의 갯수
        self.slots = [] # 데이터가 담길 list
        self._createHashTable()

    def _createHashTable(self): # 슬롯에 LinkedList 를 사용한 FIFO방식으로 데이터 추가
        for i in range(self.size):
            self.slots.append(LinkedListFIFO())

    def _find(self, item): # 나머지 연산을 기준으로 매핑한다.
        return item % self.size

    def _add(self, item):
        index = self._find(item) # 나머지 연산으로 매핑하여 인덱스를 찾는다
        self.slots[index].addNode(item)

    def _delete(self, item):
        index = self._find(item)
        self.slots[index].deleteNodeByValue(item)

    def _print(self):
        for i in range(self.size):
            print(f"슬롯(slot) {i}")
            self.slots[i]._printList()

def test_hash_tables():

    H1 = HashTableLL(3)

    for i in range(0, 20):
        H1._add(i)
    H1._print()


    print("\n항목 0, 1, 2를 삭제합니다.")
    H1._delete(0)
    H1._delete(1)
    H1._delete(2)

    H1._print()

if __name__ == "__main__":
    test_hash_tables()

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

if __name__ == "__main__":
    ll = LinkedListFIFO()

    for i in range(1, 5):
        ll.addNode(i)

    print("연결 리스트 출력 : ")
    ll._printList()

    print("인덱스가 2인 노드 삭제 후, 연결 리스트 출력 :")
    ll.deleteNode(2)
    ll._printList()


    print("값이 15인 노드 추가 후, 연결리스트 출력:")
    ll.addNode(15)
    ll._printList()

    print("모든 노드 삭제 후, 연결 리스트 출력:")
    for i in range(ll.length - 1, -1, -1):
        ll.deleteNode(i)
    ll._printList()

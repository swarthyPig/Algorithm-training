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

class LinkedListLIFO(object): # 후입선출(stack)
    def __init__(self):
        self.head = None # 맨앞을 가리킴
        self.length = 0 # 노드의 길이

    # 헤드부터 각 노드의 값을 출력
    def _printList(self):
        Node = self.head
        while Node:
            print(Node.value, end=' ') # 해당 노드의 데이터 값을 출력
            Node = Node.pointer # 그 다음 노드의 위치를 head에 넣음
        print()

    # 이전노드를 기반으로 노드를 삭제
    def _delete(self, prev, Node):
        self.length -= 1
        if not prev:
            self.head = Node.pointer
        else:
            prev.pointer = Node.pointer

    # 새 노드를 추가한다. 다음 노드로 헤드를 가리키고, 헤드는 새 노드를 가리킨다.
    def _add(self, value):
        self.length += 1
        self.head = Node(value, self.head)

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

    # 값으로 노드를 찾는다.
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

    # 인덱스에 해당하는 노드를 찾아서 삭제
    def deleteNode(self, index):
        Node, prev, i = self._find(index)

        if index == i:
            self._delete(prev, Node)
        else:
            print(f"인덱스 {index}에 해당하는 노드가 없습니다.")

    # 값에 해당하는 노드를 찾아서 삭제
    def deleteNodeByValue(self, value):
        Node, prev, found = self._find_by_value(value)
        if found:
            self._delete(prev, Node)
        else:
            print(f"값 {value}에 해당하는 노드가 없습니다.")

if __name__ == "__main__":

    ll = LinkedListLIFO()

    for i in range(1, 5):
        ll._add(i)

    print("연결 리스트 출력 : ")
    ll._printList()

    print("인덱스가 2인 노드 삭제 후, 연결 리스트 출력 :")
    ll.deleteNode(2)
    ll._printList()

    print("값이 3인 노드 삭제  후, 연결 리스트 출력:")
    ll.deleteNodeByValue(3)
    ll._printList()

    print("값이 15인 노드 추가 후, 연결리스트 출력:")
    ll._add(15)
    ll._printList()

    print("모든 노드 삭제 후, 연결 리스트 출력:")
    for i in range(ll.length-1, -1, -1):
        ll.deleteNode(i)
    ll._printList()



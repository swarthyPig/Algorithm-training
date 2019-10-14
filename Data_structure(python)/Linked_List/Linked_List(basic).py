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

if __name__ == "__main__":

    L = Node("a", Node("b", Node("c", Node("d"))))
    assert(L.pointer.pointer.value == "c")

    print(L.getData()) # 첫번째 노드의 값(a)
    print(L.getNext().getData()) # 두번째 노드의 값(b)
    print(L.getNext().getNext().getData()) # 세번째 노드의 값(c)
    print(L.getNext().getNext().getNext().getData()) # 네번째 노드의 값(d)
    L.setData("aa") # 첫번째 노드의 데이터 변경
    L.setNext(Node("e")) # 두번째 노드의 데이터 변경
    print(L.getData()) # 첫번째 노드의 값(aa)
    print(L.getNext().getData()) # 두번째 노드의 값(e)
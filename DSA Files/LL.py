
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
    def printList(self):
        temp = self.head
        while (temp):
            print(temp.data)
            temp = temp.next

    # # INSERTING at the Front
    # def push(self, new_data):
    #     new_node = Node(new_data)
    #     new_node.next = self.head
    #     self.head = new_node

    #INSERTING AFTER A GIVEN NODE
    def insert(self, prev_node, new_data):
        if prev_node is None:
            print("The given node must be in LL.")
            return
        
        new_node = Node(new_data)
        new_node.next = prev_node.next
        prev_node.next = new_node

    #APPENDING
    def append(self, new_data):
        new_node = Node(new_data)

        #if list is empty
        if self.head is None:
            self.head = new_node
            return
        #else Transverse till last node
        last = self.head
        while(last.next):
            last = last.next
        
        last.next = new_node

    #DELETING by data
    def delete_Node(self, key):
        temp = self.head

        if (temp is not None):
            if (temp.data == key):
                self.head = temp.next
                temp = None
                return

        while(temp is not None):
            if temp.data == key:
                break
            prev = temp 
            temp = temp.next

        if (temp == None):
            return
        
        prev.next = temp.next
        temp = None

    #DELETING BY POSITION
    def delete_Node_By_Position(self, position):
        if self.head is None:
            return
        if position == 0:
            self.head = self.head.next
            return self.head
        index = 0
        current = self.head
        prev = self.head
        temp = self.head
        while current is not None:
            if index == position:
                temp = current.next
                break
            prev = current
            current = current.next
            index += 1
        prev.next = temp
        return prev
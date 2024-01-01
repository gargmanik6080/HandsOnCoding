
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
        #else Transverse till last node.
        last = self.head
        while(last.next):
            last = last.next
        
        last.next = new_node

    #DELETING BY KEY                                                                             
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

# if __name__== "__main__":
list1 = LinkedList()

list1.head = Node(1)
second = Node(2)
third = Node("3")

list1.head.next = second
second.next = third

list1.printList()
print()
# #INSERTING in front
#     list1.push("Four")
#     list1.printList()
#INSERTING
print("Insertion: ")
list1.insert(second, "fifth")
list1.printList()
print()

#Appending
print("Appending: ")
list1.append("Sixth")
list1.printList()
print()

#deleting
print("Deleting: ")
list1.delete_Node("3")
list1.printList()
print()

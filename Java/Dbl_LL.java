class Dbl_LL
{
    class Node{
    int x;
    Node next, prev;
    Node()
    {
    }
    Node(int data)
    {
        x = data;
    }
    /*int get()
    {
        return 5;
    }*/
}

Node head, tail = null;

void push(int data)
{
    Node newNode = new Node(data);

    if(head == null)
    {
        head = tail = newNode;
        head.prev = null;
        tail.next = null;
    }
    else{
        tail.next = newNode;
        newNode.prev = tail;
        tail=newNode;
        tail.next = null;
    }
}

//REPLACE BY USING OLD DATA TO FIND THE NODE
void replace(int old_data, int new_data)
{
    Node current = head;
    if (head == null)
    {
        System.out.println("The list is empty...");
    }
    else{
    while(true)
    {

        if (current.x == old_data)
        {
            current.x = new_data;
            break;
        }
        else{
            if (current.next != null)
            {
                current = current.next;
            }
            else{
                System.out.println("There is no element with such data...");
            }
        }
    }}
}
//Delete node by data
void delete(int data)
{
    Node current = head;
    if (head == null)
    {
        System.out.println("The list is empty...");
    }
    else{
    while(true)
    {
        if (current.x == data)
        {
            // current.x = ndata;
            Node prev = current.prev;
            Node next = current.next;
            prev.next = next;
            next.prev = prev;
            current.next = null;
            current.prev = null;
            break;
        }
        else{
            if (current.next != null)
            {
                current = current.next;
            }
            else{
                System.out.println("There is no element with such data...");
            }
        }
    }}
}

void display()
{
    Node current = head;
    if(head == null)
    {
        System.out.println("List is Empty");
        return;
    }
    System.out.println("\nNodes of Doubly linked list:");
    while(current != null)
    {
        System.out.print(current.x + " ");
        current = current.next;
    }
}


public static void main(String[] args)
{
    Dbl_LL ll = new Dbl_LL();
    ll.push(1);
    ll.push(2);
    ll.push(3);
    ll.push(4);
    ll.push(5);

    ll.display();
    ll.replace(3, 6);
    ll.display();
    ll.delete(4);
    ll.display();
}
}
//  This program uses Doubly Linked List to calculate 
//  the number of words read from a file and the number of times
//  a word is repeated.

import java.io.*;

class DLL
{

    class Node
    {
    String x;
    Node next, prev;
    // Using constructor to initailise the value of x
    Node(String data)
    {
        x = data;
    }

    }

    Node head, tail = null;

    //  Method to add a node in the DLL
    void push(String data)
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
    void replace(String old_data, String new_data)
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

    //Method to Delete a node by data
    void delete(String data)
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

    // Method to print the nodes of DLL
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

    //  Method to count the number of times a word is repeated
    String word_count(String data)
    {
        int c = 0;
        Node current = head;
        while(current != null)
        {
            if (current.x.equals(data) == true)
            {
                c = c + 1;
            }
            current = current.next;
        }
        String d = (("\nNumber of times '") + (data) + ("' appears in the file is : ") +String.valueOf(c));
        return d;
    }

    //  Method to calculate the total number of words in a file
    int count()
    {
        Node current = head;
        if(head == null)
        {
            return 0;
        }
        int c = 0;
        while(current != null)
        {
            c = c + 1;
            current = current.next;
        }
        return c;
    }

    public static void main(String[] args) throws Exception
    {
        //Reading lines from the file "file1.txt"
        String lines = "";
        BufferedReader br = new BufferedReader(new FileReader("file1.txt"));
        String st;
        while((st = br.readLine()) != null)
        {
            lines += st;
        }
        br.close();

        // Splitting the lines into words
        String[] words = lines.split(" ", 400);
        
        //  Pushing the words into ll Doubly linked list
        DLL ll = new DLL();
        for(int m = 0; m < words.length; ++m)
        {
            ll.push(words[m]);
        }


        System.out.print("Total no. of words in the file: ");
        System.out.print(ll.count());
        String  i = ll.word_count("the");
        System.out.println(i);

    }
}
package LinkedList;

import java.util.Scanner;

class Node {
    int data;
    Node next;

    public Node(int data, Node next) {
        this.data = data;
        this.next = next;
    }
}

public class LinkedListDemo {

    static Node head = null;

    public static void insertAtFirst(int data) {
        // Creation of node
        Node node = new Node(data, null);
        if (head == null) {
            head = node;
            head.next = null;
        } else {
            node.next = head;
            head = node;
        }
    }

    public static void traverseLinkedList() {
        Node temp = head;
        int count=0;
        while (temp != null) {
            System.out.println(temp.data);
            temp = temp.next;
        }
    }

    public static void insertAtLast(int data) {
        Node node = new Node(data, null);
        if (head == null) {
            head = node;
            head.next = null;
        } else {
            Node temp = head;
            while (temp.next!= null) {
                temp = temp.next;
            }
            temp.next=node;
            node.next=null;
        }
    }
    
    public static void insertAtSpecificPosition(int data){
        Node node=new Node(data,null);
        Scanner sc=new Scanner(System.in);
        int count=0;
        System.out.println("Enter the position: ");
        int pos=sc.nextInt();
        if(head==null){
            head=node;
            head.next=null;
        }
        else if(pos==1){
            insertAtFirst(data);
        }
        else{
            Node temp1 = head;
            Node temp2;
            while(temp1!=null){
                count++;
//                temp2=temp1;
                temp1=temp1.next;
                if(count==pos-2){
                 temp2=temp1.next;
                 temp1.next=node;
                 temp1.next.next=temp2;
                }
                
            }
        }
    }

    public static void main(String[] args) {
        insertAtFirst(100);
        insertAtFirst(200);
        insertAtFirst(300);
        insertAtLast(400);
        insertAtSpecificPosition(3);
        traverseLinkedList();
    }
}

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
    
    // Method to insert node at the beginning
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

    // Method to traverse and display the linkedlist
    public static void traverseLinkedList() {
        Node temp = head;
        while (temp != null) {
            System.out.println(temp.data);
            temp = temp.next;
        }
    }
    
    // Method to insert node at the last
    public static void insertAtLast(int data) {
        Node node = new Node(data, null);
        if (head == null) {
            head = node;
            head.next = null;
        } else {
            Node temp = head;
            while (temp.next != null) {
                temp = temp.next;
            }
            temp.next = node;
            node.next = null;
        }
    }
    
    // Method to insert node at specific position
    public static void insertAtSpecificPosition(int data) {
        Node node = new Node(data, null);
        Scanner sc = new Scanner(System.in);
        int count = 1;
        System.out.println("Enter the position: ");
        int pos = sc.nextInt();
        if (head == null) {
            head = node;
            head.next = null;
        } else if (pos == 1) {
            insertAtFirst(data);
        } else {
            Node temp1 = head;
            Node temp2;
            while (temp1 != null) {
                count++;
                temp2 = temp1;
                temp1 = temp1.next;
                if (count == pos) {
                    temp2.next = node;
                    node.next = temp1;
                }
            }
        }
    }
    
    // Method to delete node from first or last position
    public static void deleteNode(String pos) {
        if (pos.equalsIgnoreCase("first")) {
            if (head == null) {
                System.out.println("Nothing to delete");
            } else {
                System.out.println("Data being deleted is " + head.data);
                head = head.next;
            }
        } else if (pos.equalsIgnoreCase("last")) {
            if (head == null) {
                System.out.println("Nothing to delete");
            } else {
                Node temp1 = head;
                Node temp2 = head;

                while (temp1.next != null) {
                    temp2 = temp1;
                    temp1 = temp1.next;
                }
                System.out.println("Data being deleted is " + temp1.data);
                temp2.next = null;
                temp1 = null;
            }
        }
    }
    
    // Method to delete node from specific position
    public static void deleteFromSpecificPosition(int pos) {
        if (head == null) {
            System.out.println("Nothing to delete");
        } else {
            Node temp1 = head;
            int count = 1;
            Node temp2;
            while (temp1 != null) {
                count++;
                temp2 = temp1;
                temp1 = temp1.next;
                if (count == pos) {
                    temp2.next = temp1.next;
                    break;
                }
            }
            System.out.println("Data being delted is " + temp1.data);
        }
    }
    
    // Main method
    public static void main(String[] args) {
        insertAtFirst(100);
        insertAtFirst(200);
        insertAtFirst(300);
        insertAtLast(400);
        insertAtLast(500);
        insertAtLast(600);
        traverseLinkedList();
//        insertAtSpecificPosition(600);
//        deleteNode("last");
        deleteFromSpecificPosition(3);
        traverseLinkedList();
    }
}

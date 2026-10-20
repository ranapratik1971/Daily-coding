#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;
public:
    List() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head==NULL) {
            head = tail = newNode;
            return;
        } else {
            newNode->next = head; //newNode next heads to the head 
             head = newNode;
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head==NULL) {
            head = tail = newNode;
            return;
        } else {
            tail->next = newNode; //tail next points to the newNode
            tail = newNode; //tail is now the newNode
        }
    }

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    List ll;
    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);
    ll.push_back(69);
    ll.print(); // Output: 30 20 10 40
    return 0;
}
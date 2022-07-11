#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};



void insertAtHead(Node* &head, int data) {

    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void insertAtLast(Node* &head, int data) {

    Node* temp = new Node(data);
    Node* temp1 = head;
    while (temp1->next != NULL) {
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp1->next = temp;
}

void insertAtIndex(Node* &head, int data, int index) {

    //inserting at head
    if (index == 0) {
        insertAtHead(head, data);
        return;
    }

    Node* temp = new Node(data);
    Node* temp1 = head;
    int i = 0;
    while (i != index - 1) {
        temp1 = temp1->next;
        i++;
    }

    // inserting at last
    if (temp1 ->next == NULL) {
        insertAtLast(head, data);
        return;
    }

    temp ->next = temp1->next;
    temp1->next = temp;
}

void deleteAtHead(Node* &head) {

    Node* temp = head;
    head = temp->next;
    free(temp);
}

void deleteAtLast(Node* &head) {

    Node* prev = head;
    Node* temp = prev->next;
    while (temp->next != NULL) {
        temp = temp->next;
        prev = prev->next;
    }

    prev->next = NULL;
    free(temp);
}

void deleteAtIndex(Node* &head, int index) {

    if (index == 0) {
        deleteAtHead(head);
        return;
    }
    Node* temp = head;
    Node* curr = temp->next;
    int i = 0;
    while (i != index - 1) {
        temp = temp->next;
        curr = curr->next;
        i++;
    }
    if (temp->next == NULL) {
        free(curr);
        deleteAtLast(head);
        return;
    }
    temp->next = curr->next;
    free(curr);
}

void printLinkedList(Node* &head) {

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}




int main() {

    Node* newNode = new Node(20);
    Node* head = newNode;

    printLinkedList(head);

    insertAtHead(head , 10);
    printLinkedList(head);

    insertAtLast(head , 40);
    printLinkedList(head);


    insertAtIndex(head , 30 , 2);
    printLinkedList(head);


    deleteAtIndex(head , 2);
    printLinkedList(head);

    deleteAtHead(head);
    printLinkedList(head);

    deleteAtLast(head);
    printLinkedList(head);
}

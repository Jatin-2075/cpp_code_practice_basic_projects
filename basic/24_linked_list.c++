#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Insert at end
void insertEnd(Node* &head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// Display linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Access element by index (0-based)
int getAt(Node* head, int index) {
    int i = 0;
    Node* temp = head;

    while (temp != NULL) {
        if (i == index)
            return temp->data;
        temp = temp->next;
        i++;
    }
    return -1; // index out of range
}

// Delete by value
void deleteValue(Node* &head, int val) {
    if (head == NULL) return;

    if (head->data == val) {
        Node* del = head;
        head = head->next;
        delete del;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL && temp->next->data != val)
        temp = temp->next;

    if (temp->next != NULL) {
        Node* del = temp->next;
        temp->next = del->next;
        delete del;
    }
}

// Delete entire list (good habit)
void clearList(Node* &head) {
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node* head = NULL;

    // Insert
    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    insertEnd(head, 40);

    // Display
    display(head);

    // Access
    cout << "Element at index 2: " << getAt(head, 2) << endl;

    // Delete
    deleteValue(head, 20);
    display(head);

    // Clean up
    clearList(head);

    return 0;
}

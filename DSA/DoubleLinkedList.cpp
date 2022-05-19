
#include <iostream>
using namespace std;

//12 43 9 34 ---normal order
//34 9 43 12 ---- reverse order

//Node creation as below
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

//insertion at front

void insertFront(struct Node** head, int data){
    struct Node* newNode= new Node;
    newNode->data=data;
    newNode->next=(*head);
    newNode->prev=NULL;
    if ((*head) != NULL){
        (*head)->prev = newNode;
    }
    (*head) = newNode;
}

// insert a newNode at the end of the list
void insertEnd(struct Node** head, int data) {
  struct Node* newNode = new Node;
  newNode->data = data;
  newNode->next = NULL;

  struct Node* temp = *head;
  if (*head == NULL) {
    newNode->prev = NULL;
    *head = newNode;
    return;
  }
  while (temp->next != NULL)
    temp = temp->next;
  temp->next = newNode;

  newNode->prev = temp;
}

// print the doubly linked list
void displayList(struct Node* node) {
  struct Node* last;

  while (node != NULL) {
    cout << node->data << "->";
    last = node;
    node = node->next;
  }
  if (node == NULL)
    cout << "NULL\n";
}

//print reverse
void reversePrint(struct Node** head)
{
    struct Node* tail = *head;
  
    // Traversing till tail of the linked list
    while (tail->next != NULL) {
        tail = tail->next;
    }
    // and printing the node->data
    while (tail != *head) {
        cout << tail->data << "->";
        tail = tail->prev;
    }
    cout << tail->data<<" ";
}

int main() {
  // initialize an empty node
  struct Node* head = NULL;

  insertEnd(&head, 12);
  insertEnd(&head, 43);
  insertEnd(&head, 9);
  insertEnd(&head, 34);
  displayList(head);
  reversePrint(&head);
}
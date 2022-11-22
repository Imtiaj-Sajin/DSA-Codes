#include <iostream>

using namespace std;


class Node{

public:
    int data = 0;
    Node *next;
};


class LinkedList{

private:
    Node *head;
    Node *tail;

public:
    LinkedList(){
        this->head = NULL;
        this->tail = NULL;
    }

    void createNewNode(int data){
        Node *temp = new Node();
        temp->data = data;
        temp->next = NULL;


        if(head == NULL){
            head = temp;
            tail = temp;
        }else{
            tail->next = temp;
            tail = temp;
        }
    }

    void ShowList(){
        while(head->data != NULL){
            cout<<head->data<< " ";
            head = head->next;
        }
    }
};

int main()
{

   LinkedList *myList = new LinkedList();

   myList->createNewNode(30);
   myList->createNewNode(50);
   myList->createNewNode(70);
   myList->createNewNode(10);
   myList->createNewNode(90);
   myList->ShowList();

    return 0;
}

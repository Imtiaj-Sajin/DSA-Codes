#include<iostream>
using namespace std;

class Student{
public:
    int id;
    string name;

    Student(int id,string name)
    {
        this->id=id;
        this->name=name;
    }
    void show(){
    cout<<"Name:"<<name<<endl;
    cout<<"Id:"<<id<<endl;
    cout<<endl;
    }
};
    class Node{

public:
    Student *data ;
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

    void createNewNode(Student *data){
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
            head->data->show();
            head = head->next;
        }
    }
};



int main()
{

    Student s1= Student(2245,"rafz");
    Student s2= Student(6321,"wahz");
    Student s3= Student(1234,"shah");
    Student s4= Student(3124,"ljhjf");


   LinkedList *myList = new LinkedList();

   myList->createNewNode(&s1);
   myList->createNewNode(&s2);
   myList->createNewNode(&s3);
   myList->createNewNode(&s4);

   myList->ShowList();
    return 0;
}


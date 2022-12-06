#include <iostream>
using namespace std;
class Student{
    
public:
    float cgpa;
    string name,id;
    
    Student(string name,string id,float cgpa)
    {
        this->name=name;
        this->id=id;
        this->cgpa=cgpa;
    }
    void showData()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Cgpa: "<<cgpa<<endl;
        
    }
};
class BST
{
    Student s[500];
    float data,n=0;
    BST *left, *right;

public:
    void addStd(){
    Student stdnt;
     cout<<"Name: :";
        cin>>stdnt.car_no;
    cout<<"ID:";
        cin>>stdnt.date;
    cout<<"cgpa:";
        cin>>stdnt.ticket_no;
        stdnt.type=type;
        
        BST(stdnt.cgpa);
        n++;
    }
    BST(){
        data = 0;
        left = NULL;
        right =NULL;
    }

    BST(float value){
        data = value;
        left = NULL;
        right= NULL;
    }

    BST* Insert(BST* root, int value)
    {
        if (!root){
            return new BST(value);
        }

        if (value > root->data){
            root->right = Insert(root->right, value);
        }
        else{
            root->left = Insert(root->left, value);
        }
        return root;
    }

    void Inorder(BST* root)
    {
        if (!root){
            return;
        }
        Inorder(root->left);
        cout << root->data << endl;
        Inorder(root->right);
    }
};



int main()
{
    BST b, *root = NULL;
    root = b.Insert(root, 43);
    b.Insert(root, 31);
    b.Insert(root, 64);
    b.Insert(root, 89);
    b.Insert(root, 40);
    b.Insert(root, 20);
    b.Insert(root, 56);
    b.Insert(root, 47);
    b.Insert(root, 33);
    b.Insert(root, 28);
    b.Insert(root, 59);

    b.Inorder(root);
    return 0;
}

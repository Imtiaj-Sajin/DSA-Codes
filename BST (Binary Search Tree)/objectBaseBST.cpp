#include <iostream>
using namespace std;

class Student
{
public:
    string name, id;
    float cgpa;
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
        cout<<"CGPA: "<<cgpa<<endl;
    }
    Student(){}

        
};



class BST
{
    Student data;
    BST *left, *right;



public:
    BST(){
        
        left = NULL;
        right =NULL;
    }



   BST(Student value){
        data = value;
        left = NULL;
        right= NULL;
    }



   BST* Insert(BST* root, Student value)
    {
        if (!root){
            return new BST(value);
        }



       if (value.cgpa > root->data.cgpa){
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
        root->data.showData();
        cout<<endl;
        Inorder(root->right);
    }
};





int main()
{
    Student std[]={Student("Ak","332",3.65),
    Student("sajin","6645",3.09),
    Student("SAg","3365",1.99),
    Student("KAbbo","2354",3.00), Student("Fahmi","9513",2.98),
    Student("Alex","3245",2.01),
    Student("Shafin","6431",2.80),
    Student("Rafi","5641",4.00),
    Student("Mafi","2398",1.00),
    Student("Lena","1245",1.90),
    Student("Labib","6524",3.24),
    Student("Kafi","7531",3.88),
    
   };
    BST b, *root = NULL;
    root = b.Insert(root, std[0]);
   
   for (int i = 1; i < sizeof(std)/sizeof(Student); i++)
   {
    b.Insert(root,  std[i]); 
   }
   
    
   b.Inorder(root);
    return 0;
}

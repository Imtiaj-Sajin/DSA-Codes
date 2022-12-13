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
    BST *left;
    BST *right;
public:
    BST(){
        right =NULL;
       left= NULL;
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



   void inorderSearch(BST* root,string x)
    {

        if (!root){

            return;
        }


        inorderSearch(root->left, x);

        if(root->data.id==x)
        {
            cout<<"Found"<<endl;
          root->data.showData();
        cout<<endl;
        }
        inorderSearch(root->right, x);
    }
};





int main()
{
    Student std[]={Student("Fahim","225",2.65),
    Student("Imtiaj","126",3.09),
    Student("Rafi","3365",1.99)};
    BST b, *root = NULL;
    root = b.Insert(root, std[0]);
   for (int i = 1; i < sizeof(std)/sizeof(Student); i++)
   {
    b.Insert(root,  std[i]);
   }

    string x;
    cout<<"enter id to search:"<<endl;
        cin>>x;
   b.inorderSearch(root,x);
    return 0;
}

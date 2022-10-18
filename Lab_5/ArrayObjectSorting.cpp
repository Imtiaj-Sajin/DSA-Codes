#include <iostream>

using namespace std;


class Student{

public:
    string name;
    int id;
    float cgpa;
    int credit;
    Student(string name,int id,float cgpa,int credit)
    {
       this->name=name;
       this->id=id;
       this->cgpa=cgpa;
       this->credit=credit;
    };

   void display(){
    cout<<"Name: "<<name<<endl;
    cout<<"ID: "<<id<<endl;
    cout<<"CGPA: "<<cgpa<<endl;
    cout<<"Credit Completed: "<<credit<<endl;
    }

};


int main()
{
    Student s[5]={Student("sajins",22,3.94,20),Student("wahidz",45,3.99,31),Student("rafz",54,4,30),Student("shaonz",4,3.85,35),Student("shaks",99,3.69,36)};

    cout<<"Options:(input any)"<<endl;
    cout<<"1)Unsorted Data\n2)Credit Wise sort\n3)CGPA Wise\n4)Total Passes"<<endl;
   int option;
    cin>>option;
    switch(option)
    {

    case 1:
        for(int i=0;i<5;i++)
        {
            s[i].display();
            cout<<"\n";
        }
    break;

    case 2:
        int minIndex =0;
        cout<<endl<<"---------"<<endl;
        cout<<"Your sorted values: "<<endl;

        for(int i=0; i<5; i++){
            minIndex = i;

            for(int j=i+1; j<5; j++){
                if(s[minIndex].credit > s[j].credit){
                minIndex = j;
                swap(s[minIndex],s[i]);
                }
            }
        }

        for(int i=0;i<5;i++)
        {
            s[i].display();
            cout<<"\n";
        }
    break;

    case 3:
        int count=0;
        for(int i=0; i<(5-1); i++)
        {
         for(int j=0; j<(5-i-1); j++)
            {
            if(s[j].cgpa > s[j+1].cgpa)
            {
               swap(s[j],s[j+i]);
               count++;
            }
        }
        }
        for(int i=0;i<5;i++)
        {
        s[i].display();
        cout<<"\n";
        }
 break;
    case 4:
        cout<<"Passes:"<<count;
        break;


default:
    cout<<"Take proper option:"<<endl;


    }

}


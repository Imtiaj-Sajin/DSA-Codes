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
    Student s[5]={Student("sajins",22,3.94,20),Student("wahidz",45,3.90,31),Student("rafz",54,4,30),Student("shaonz",4,5.85,35),Student("shaks",99,6.69,36)};

    int option;
    int count=0;
    do{

    cout<<"What operation do you want to perform?Select option number.Enter 0 to exit"<<endl;
    cout<<"1)Unsorted Data\n2)Credit Wise sort\n3)CGPA Wise\n4)Total Passes\n5)Search With CGPA"<<endl;
    cin>>option;
    switch(option)
    {
    case 0:
        break;

    case 1:
        {
        for(int i=0;i<5;i++)
          {
            s[i].display();
            cout<<"\n";
          }
        break;
        }

    case 2:
        {
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
        }

    case 3:
        {

        for(int i=0; i<5; i++)
        {
         for(int j=0; j<(5-1); j++)
            {
                if(s[j].cgpa > s[j+1].cgpa)
                {
                    Student temp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=temp;
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
        }

    case 4:
        {
        cout<<"Passes:"<<count;
        break;
        }

   case 5:
        {
        float srch;
        cout<<"Enter Cgpa you wanna search: ";
        cin>>srch;

        for(int i=0; i<5; i++)
            {
                if(s[i].cgpa == srch)
                    {
                        s[i].display();
                        cout<<"\n";
                    }
                
                else
                    cout<<"Not Found"<<endl;
            }

        break;
        }


default:
    {
     cout<<"Take proper option:"<<endl;
     break;
    }
    }
    }while(option!=0);

}

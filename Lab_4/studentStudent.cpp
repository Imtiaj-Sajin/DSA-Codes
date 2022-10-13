#include <iostream>

using namespace std;


class Student{
    string name;
    int id;
    float cgpa;
public:
    Student(string name,int id,float cgpa)
    {
       this->name=name;
       this->id=id;
       this->cgpa=cgpa;
    };

};


int main()
{
    Student s[]={Student("sajins",22,3.94),Student("wahidz",45,3.99),Student("rafz",54,4),Student("shaonz",4,3.85),Student("shaks",99,3.69)};

}


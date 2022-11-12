#include <iostream>
using namespace std;

struct Student
{
    int UniqueID;
    int completeCredits;
    double CGPA;
};

int main()
{
   int a;
   cout<<"Enter the size of array";
   cin>>a;
   struct Student S[a];
   int i;
   int n;

   for(i=0; i<a; i++)
   {
       cout << " enter the information of " << (i + 1) << "th student "<< endl;
       cout<<"Student ID: ";
       cin>>n;
       S[i].UniqueID = n;
       cout<<"Credit Completed: ";
       cin>>S[i].completeCredits;
       cout<<"CGPA: ";
       cin>>S[i].CGPA;

    }


   cout<<"Student  who earnd CGPA more than 3.75 : "<<endl;
   for(i=0;i<a;i++)
   {
       if(S[i].CGPA > 3.75)
       {
            cout<<S[i].UniqueID<<endl;
       }
   }

   cout<<"\nStudent ID who have completed more than 50 credits : ";
   for(i=0;i<a;i++)
   {
       if(S[i].completeCredits > 50)
       {
            cout<<S[i].UniqueID<<endl;
       }
   }
   cout<<endl<<endl;
   return 0;
}

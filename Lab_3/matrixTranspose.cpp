//you have to input a matrix fom user, then transpose it
#include <iostream>
using namespace std;

int main() {
   int a[10][10], transpose[10][10], row, column, i, j;

   cout << "Enter rows of matrix: ";
   cin >> row;

   cout << "\nEnter column of matrix: ";
   cin>> column;

   cout<<"\nEnter Elements in matrix:"<<endl;

   for(i=0;i<row;i++)
    for(j=0;j<column;j++)
   {
       cout<<"Enter element of a"<<i+1<<j+1<<" :";
       cin>>a[i][j];
   }


   cout<<"\nInputed Matrix:"<<endl;

   for(i=0;i<row;i++){
    for(j=0;j<column;j++)
   {
       cout<<" "<<a[i][j];
    }
   cout<<endl;
   }

   cout<<"\nTransposed Matrix:"<<endl;

  for(i=0;i<column;i++){
    for(j=0;j<row;j++)
   {
       cout<<" "<<a[j][i];
    }
   cout<<endl;
   }

}

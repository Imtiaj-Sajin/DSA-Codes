//You have to find repeated number from an array
#include<iostream>
using namespace std;
int main()
{
    int count=0,num;
    int Array_1[10] = {8,4,6,1,6,9,6,1,9,8};
    cout<<"Enter a number to search: ";
    cin>>num;
    for(int i=0;i<10;i++)
    {
        if(Array_1[i]==num)
        {
            count++;
        }
    }

    if(count!=0)
    {
        cout<<"The number occurs "<<count<<" times in the array."<<endl;

    }
    else
        cout<<"Number not found.";
}



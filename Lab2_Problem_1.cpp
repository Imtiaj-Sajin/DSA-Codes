#include<iostream>
using namespace std;
int main()
{

    int arr1[5];
    int arr2[6];
    int Marr[11];
    int j=5;
    int k=4;
    for(int i=0;i<5;i++)
    {
        cin>>arr1[i];
        Marr[k]=arr1[i];
        k--;
    }
    cout<<"Input another array:"<<endl;
    for(int i=0;i<6;i++)
    {
        cin>>arr2[i];
        Marr[j]=arr2[i];
        j++;
    }

      for(int i=10;i>=0;i--)
    {
        cout<<Marr[i]<<" ";
    }
}





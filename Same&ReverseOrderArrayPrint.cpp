#include <iostream>
using namespace std;
 int arr[10];
orderedDisplay()
{
    for(int i=0;i<=9;i++)
    {
        cout<<arr[i]<<" ";
    }
}
reverseOrderDisplay()
{
    for(int i=9;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int options;
    cout<<"take 10 input:"<<endl;

    for(int j=0;j<=9;j++)
    {

       cin>>arr[j];
    }

    cout<<"\n\nselect options"<<endl;
    cout<<"1.Same ordered output"<<endl;
    cout<<"2.Reverse ordered output"<<endl;
    cout<<"3.Exit"<<endl;

    cin>>options;

    switch(options)
    {
    case 1:
        orderedDisplay();
        break;
    case 2:
        reverseOrderDisplay();
        break;
    case 3:
        break;
    default:
        cout<<"select correct option\n";
    }


    return 0;
}

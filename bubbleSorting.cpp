#include <iostream>

using namespace std;

int main()
{

    int n;
    int temp;

    cout<<"Total number you wanna input:";
    cin>>n;

    int arr[n];

    cout<<"Input "<<n<<" integer number:"<<endl;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"Your entered values: "<<endl;

    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"---------"<<endl;
    cout<<"Your sorted values: "<<endl;

    for(int i=0; i<n-1; i++)
    {
         for(int j=0; j<(n-1); j++)
        {
            if(arr[j] > arr[j+1])
            {
               temp = arr[j];
               arr[j] = arr[j+i];
               arr[j+i] = temp;

            }
        }


    }

    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}

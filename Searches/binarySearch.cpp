#include <bits/stdc++.h>
using namespace std;

void sort(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

bool binarySearch(int arr[], int size, int item)
{
    sort(arr, size);

    int first, last, mid;
    first = 0;
    last = size-1;

    bool isFound = false;

    while(last>=first)
    {
        mid = (first+last) / 2;

        if(item>arr[mid])
        {
            first = mid + 1;
        }
        else if(item<arr[mid])
        {
            last = mid - 1;
        }
        else if(arr[mid] == item)
        {
            isFound = true;
            break;
        }
    }
    return isFound;
}

int main()
{
    int arr[] = {4,11,4,2,4,1};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<"Given array: "<<endl;

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<endl;

    int item;
    cout<<"Enter item: ";
    cin>>item;

    bool isFound = binarySearch(arr, size, item);

    if(isFound == true)
    {
        cout<<"Item '"<<item<<"' found"<<endl;
    }
    else
    {
        cout<<"Item NOT Found"<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;

int selectionSort(int *x,int n){
    for(int i=0;i<n;i++)
    {
        int iMin=i;
        for(int j=i+1;j<n;j++)
        {
            if(x[j]<x[iMin])
                iMin=j;

        }
        swap(x[iMin],x[i]);
    }
}


void merge(int *arr, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        }
        else  {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high) {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)  {
        arr[i] = c[i];
    }
}
void merge_sort(int *arr, int low, int high)
{
    int mid;
    if (low < high){

        mid=(low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,low,high,mid);
    }
}

void print(int *a,int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    ifstream fin("100000.txt");
    int n=20;
    int *a=new int[n];

    for(int i=0;i<n;i++)
        fin>>a[i];



  print(a,n);
  selectionSort(a,n);
  print(a,n);
  merge_sort(a,0,n-1);
  print(a,n);
}

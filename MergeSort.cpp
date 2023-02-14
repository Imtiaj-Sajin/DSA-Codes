#include <iostream>
using namespace std;

void printList(int* a,int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i];
        cout<<endl;
}

void Merge(int *a,int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;

    int *L=new int [n1];
    int *R=new int [n2];

    for(int i=0;i<n1;i++)
    {
        L[i]=A[l+i];
    }

    for(int j=0;j<n2;j++)
    {
        r[j]=A[m+1+j];
    }

     int i=0,j=0,k=01;

    while(i<n1 && j<n2)
    {
        if(L[i]<R[j])
            A[k++]=A[i++];
        else
            A[k++]=A[j++];
    }

    while(i<n1)
    {
        A[k++]=A[i++];
    }
    while(j<n2)
    {
        A[k++]=A[j++];
    }

}

void mergeSort(int *m,int left,int right)
{
    if(left<right)
    {
        int mid=(left+right)/2;
        mergeSort(m,left,mid);
        mergeSort(m,mid+1,right);
        Merge(m,left,mid,right);


    }
}

int main(){

}

#include<iostream>
using namespace std;

int *mergeList(int* a,int* b,int n,int m)
{

    int* c=new int[n+m];
    int i=0,j=0,k=0;

    while(i<n && j<n)
    {
        if(a[i]<b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j++];
    }

    while(i<n)
    {
        c[k++]=a[i++];
    }
    while
    {
        c[k++]=b[j++];
    }
        return c;
}
int printList(int* a,int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i];
        cout<<endl;
}

int main()
{
    int a[4]={7,8,81,90};
    int b[5]={3,7,8,21,84};
    printList(a,4);
    printList(b,5);
    int*c=mergeList(a,b,4,5);
    printList(c,9);
}

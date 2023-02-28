#include<iostream>
using namespace std;

int* linspaceVector(int low,int high,int n)
{
    int *a=new int[n];
    int x=(low+high)/n;
    for(int i=0;i<n;i++)
    {
        a[i]=low;
        low=low+x;

    }

    return a;


}
int main()
{
    int n=5;
    int* b=linspaceVector(10,50,n);
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
}

#include<iostream>
using namespace std;

int fib(int n)
{
    int F[n+1];
    F[0]=0;
    F[1]=1;

    for(int i=2;i<=n;i++)
        F[i]=F[i-2]+F[i-1];
    return F[n];
}

int main(){
    cout<<fib(45);
}

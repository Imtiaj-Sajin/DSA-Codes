#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;

}
int main(){
    int lenth, value, i;

    int A[]={9,4};
     i=8;
    int b=4;
  
    cout<<"Before Swapping:"<<endl;
    cout<<a<<"   "<<b<<endl;
    
    Swap(&i,&b);

    cout<<"After Swapping:"<<endl;
    cout<<a<<"   "<<b<<endl;
    
}

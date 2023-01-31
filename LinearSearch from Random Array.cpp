#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int *a,int s,int f){
    for(int i=0;i<s;i++)
        if(a[i]==f)
            return i;
        return -1;

}

int main(){
    srand(time(0));
cout<<"Size of random array you wanna create:";
int n;
cin>>n;
cout<<"which number you wanna search:";
int x;
cin>>x;

int *a=new int [n];

for(int i=0;i<n;i++)
    a[i]=rand()%100;

for(int i=0;i<n;i++)
    cout<<i<<"->"<<a[i]<<endl;

    int index= LinearSearch(a,n,x);
    if(index==-1)
        cout<<x<<" Not found in random array"<<endl;
    else
        cout<<"Found "<<x<<" at index "<<index<<endl;



}

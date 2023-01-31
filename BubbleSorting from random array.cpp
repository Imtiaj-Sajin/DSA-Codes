#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void generateRandom(int *p,int n )
{
    srand(time(0));
    for(int i=0;i<n;i++)
        p[i]=rand()%1000+1;
}
void bubbleSort(int *p,int n)
{//cout<<"dsdkk";
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(p[j]>p[j+1]){
                swap(p[j],p[j+1]);
            }
        }
    }
}

void print(int *q,int n)
{
    for(int i=0;i<n;i++){
    cout<<q[i]<<endl;
    }

}

int main(){
int n;
cin>>n;

int *a=new int [n];

generateRandom(a,n);
print(a,n);
bubbleSort(a,n);
//cout<<"dfsf";
print(a,n);


}

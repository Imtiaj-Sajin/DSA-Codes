#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Wap(int *x,int *y)
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
  cout<<&b;

    Wap(&i,&b);

    cout<<b;
    // lenth=sizeof(A)/4;
    // for(int j=1; j<lenth;j++){
    //     value=A[j];
    //     i=j-1;
    //     while(i>=0&&A[i]>value){
    //         A[i+1]=A[i];
    //         i=i-1;
    //     }
    //     A[i+1]=value;
    // }
    // for(i=0;i<lenth;i++){
    //     cout<<A[i]<<" ";
    // }
}

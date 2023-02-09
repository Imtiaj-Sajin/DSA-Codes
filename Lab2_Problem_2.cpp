// Yuo have to find total common elements from two array
#include<iostream>
using namespace std;
int main(){
    int x=0;
    int arr1 [6];
    int arr2 [5];
    int arr3[11];
    cout<<"Input array 1: "<<endl;
      for(int j=0;j<6;j++)
    {

       cin>>arr1[j];
    }
    cout<<"Input array 2: "<<endl;

    for(int j=0;j<5;j++)
    {

       cin>>arr2[j];
    }
    for(int i=0; i<6;i++){
        for(int j=0; j<5;j++){
            if(arr1[i]==arr2[j]){
                arr3[x]=arr1[i];
            x++;
            }
        }
    }
    if(x!=0){
    cout<<"Common Elements:";
    for(int i=0; i<x;i++)
        cout<<arr3[i]<<" ";
    }
    else
        cout<<"No common element!";


}

#include<iostream>
using namespace std;

int main(){
int array[10];
int array2[10];
int i,j,k=0;

 for (int i = 0; i < 10; i++)
    {
        cin>>array[i];
    }
    
for(i=0;i<10;i++)
{
    for(j=i+1;j<10;j++){
        if(array[i]==array[j]){
            break;
        }
    }
    if(j==10){
        array2[k]=array[i];
        k++;
    }
}
    if(k==10){
        cout<<"Already unique.";
    }
    else
    {
        for(i=0;i<k;i++)
            cout<<array2[i]<<" ";
    }
return 0;
}

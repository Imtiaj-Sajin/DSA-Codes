#include<iostream>
using namespace std;
int main (){

int i,j,num=6,temp,arr [6]={3,2,33,22,11,76};


for(i=1;i<num;i++){

    temp = arr[i];//i = starting index
    j =i-1;
    while ((temp<arr [j])&& (j>=0)){ // j=current index

        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[j+1]=temp;
}
cout<<"sorted elements " <<endl;
for (i =0;i<num;i++)
{
    cout<< arr [i]<<endl;
}
return 0;
}

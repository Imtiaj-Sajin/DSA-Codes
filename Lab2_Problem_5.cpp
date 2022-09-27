#include<iostream>
using namespace std;
int main()
{
    int count=0,flag=0;
    int Array_1[10] = {8,4,6,1,6,9,6,1,9,8};

    for(int i=0;i<10;i++)
    {
  
      
        for(int j=0;j<10;j++)
        {
          if(Array_1[i]==Array_1[j])
            {
            count++;
            }
        }
        cout<<Array_1[i]<<" occurs "<<count<<" times"<<endl;

        count=0;



    }

}


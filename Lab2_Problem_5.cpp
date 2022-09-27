#include<iostream>
using namespace std;
int main()
{
    int count=0,j=0;
    int Array_1[10] = {8,4,6,1,6,9,6,1,8,8};

    for(int i=0;i<10;i++)
    {      
        for( j=0;j<10;j++)
        {
          if(Array_1[i]==Array_1[j])
            {
            count++;
            }
        }
        for(j=i+1;j<10;j++)
        {
          if(Array_1[i]==Array_1[j])
          {
              break;
          }
        }
        if(j==10)
          cout<<Array_1[i]<<" occurs "<<count<<" times"<<endl;

        count=0;



    }

}


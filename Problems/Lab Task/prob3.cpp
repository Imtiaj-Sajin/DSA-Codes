#include<bits/stdc++.h>
using namespace std;

int main()
{
    ofstream fout;

    fout.open("100000.txt");

    srand((time(0)));
    int n=100000;
    for(int i=0;i<n;i++)
    {
        fout<<rand()%1000<<endl;
    }



}

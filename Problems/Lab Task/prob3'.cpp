#include<bits/stdc++.h>
using namespace std;

int main()
{
    ofstream fout;

    fout.open("1000000.txt");

    srand((time(0)));
    int n=1000000;
    for(int i=0;i<n;i++)
    {
        fout<<rand()%n<<endl;
    }



}

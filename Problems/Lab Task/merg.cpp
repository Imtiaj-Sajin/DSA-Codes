#include<bits/stdc++.h>
using namespace std;

int main()
{
    ofstream fout;

    fout.open("1k.txt");

    srand((time(0)));
    int n=50000;
    for(int i=0;i<n;i++)
    {
        fout<<rand()%n<<endl;
    }

}

#include <iostream>
using namespace std;

void encode()
{

string s;
int i,a;
char c;
cout<<"Enter a string:";
getline(cin,s);
int size=s.length();
cout<<"Enter how much char you wanna skip:";
    cin>>a;
    for(i=0;i<size;i++)
    {
        i=i+a;
        c=s[i];

        if(c>='a'&&c<='z')
        {

            c=c+2;
            if(c>'z')
            c=c-'z'+'a'-1;
            s[i]=c;
        }
        else if(c>='A'&&c<='Z')
            c=c+2;
            if(c>'Z')
                c=c-'Z'+'A'-1;
            s[i]=c;

    }
    cout<<s;

}

int main()
{
    encode();
}

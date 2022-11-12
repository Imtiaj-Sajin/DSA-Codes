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
        int k=(int)c;

        if(c>='a'&& c<='z')
        {

            k=k+2;
            if(c>'z')
            k=k-'z'+'a'-1;
            s[i]=(char)k;
        }
        else if(c>='A'&&c<='Z')
        {
            k=k+2;
            if(c>'Z')
            k=k-'Z'+'A'-1;
            s[i]=(char)k;
        }
    }
    cout<<s;

}

int main()
{
    encode();
}

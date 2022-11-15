#include<iostream>
using namespace std;
#define size 15;
char Stack[15];
char postfix[15];
int top=-1;




    rear = -1;
    front = 0;


    void enqueue(char a){
        if(rear >=  size -1){
            cout<<"Queue is full"<<endl;
        }else{
            postfix[++rear] = a;
        }
    }

    void dequeue(){   if(rear < front){
            cout<<"Queue is empty..."<<endl;
            return 0;
        }

        ++front;
        return 0;
    }


void push(char c)
{
    top++;
    Stack[top]=c;
    /cout<<Stack[top];
}



bool isOperator(char c)
{
    if(c=='+'||c=='-'||c=='*'||c=='/')
        return true;
    return false;
}

bool isOperand(char c)
{
    if(c>='0'&c<='9')
        return true;
    return false;
}

int precedence(char op)
{
    if(op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if(op == '^')
        return 3;
}


void convert(string infix)
{
    infix=infix+')';

    push('(');
    int i=0;
    do{
       cout<<endl;
       char op=infix[i];
       if(isOperand(op))
        enqueue(op);
       else if(isOperator(op))
       {
           if(op='(')
                push(op);
           else if(op=')')


       }

    i++;
    }while(i<infix.length());

}

int main()
{
    string infix_exp,postfix_exp;
    infix_exp="2*4+(6-3)/3";
    convert(infix_exp);
    for(int i=0;i<12;i++)
        cout<<infix_exp[i];
}

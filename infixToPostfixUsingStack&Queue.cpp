#include<iostream>
using namespace std;

char Stack[15];
char postfix[15];
int top=-1;
int size=15;



    int rear = -1;
    int front = 0;


    void enqueue(char a){
        if(rear >=  size -1){
            cout<<"Queue is full"<<endl;
        }else{
            postfix[++rear] = a;
        }
    }

    void dequeue(){

        front--;

    }


void push(char c)
{
    top++;
    Stack[top]=c;
    //cout<<Stack[top];
}

void pop()
{
    top--;
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
bool isParentheses(char c)
{
    if(c=='('||c==')')
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
       else if(isParentheses(op))
       {
           if(op='(')
                push(op);
           else if(op=')')
                while(Stack[top]!='(')
                {
                    enqueue(Stack[top]);
                    pop();
                }
            pop();
       }
       else if(isOperator(op))
       {
           while(precedence(op)<=precedence(Stack[top]))
           {
               enqueue(Stack[top]);
               pop();
           }
           push(op);
       }


    i++;
    }while(i<infix.length());

    for(int i=0;i<postfix[].length();i++)
    cout<<postfix[i];
}

int main()
{
    string infix_exp,postfix_exp;
    infix_exp="2*4+(6-3)/3";
    convert(infix_exp);
    for(int i=0;i<12;i++)
        cout<<infix_exp[i];
}

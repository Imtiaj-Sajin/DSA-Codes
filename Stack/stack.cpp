//Stack is a linear data structure which follows LIFO or FILO methods
//LIFO - Last In First Out
//FILO - First In Last Out
#include<iostream>
using namespace std;

class Stack{

private:
    int top;
    int arr[5];

public:
    Stack()
    {
        top=-1;
        for(int i=0;i<=4;i++)
        {
            arr[i]=0;
        }
    }

    bool isEmpty() //tells the stack is empty or not and returns
    {
        // system("color Ec");
        if(top==-1)
            return true;
        else
            return false;
    }

    bool isFull() //tells the stack is stack is full or not & returns
    {
        if(top==4)
            return true;
        else
        return false;
    }

    void push(int val) //place a new item  on stack. if there's no place for new item,stack  is in overflow  state
    {
        // system("color Fc");
        if(isFull())
            cout<<"stack overflow"<<endl;
        else
        {
            top++;
            arr[top]=val;
        }
    }
    int pop()//Return the item at top of the stack & then remove it;if pop called when stack is empty-stack overflow
    {
        if(isEmpty())
        {
            cout<<"stack underflow"<<endl;
            cout<<"poped value:";
            return 0;
        }
        else
        {
            int k= arr[top];
            arr[top]=0;
            top--;
            cout<<"poped value: ";
            return k;
        }
    }
    int count()//get the numbers of items in stack
    {
        return (top+1);
    }
    int peek(int pos) //access the items at i position
    {
     if(isEmpty())
     {
         return 0;
         cout<<"stack underflow"<<endl;

     }
     else
     {
         return arr[pos];
     }
    }

    void change(int pos,int val)//change the position at i position
    {
       if(top>pos)
       {
           arr[pos]=val;
           cout<<"value changed at position: "<<pos<<endl;
       }
       else
       {
           cout<<"This value at this position couldn't be changed,because: ";
            if(isEmpty())
            cout<<"Stack Underflow "<<endl;
            else
            cout<<"There's nothing assigned before on that position"<<endl;
       }

    }

    void display() //display all numbers
    {
        cout<<"All values in stack here:"<<endl;
        for(int i=4;i>=0;i--)
        {
            cout<<arr[i]<<endl;
        }
    }



};

int main()
{
    Stack s1;
    int option,position,value;

    do
    {
        cout<<"What operation do you want to perform?Select option number.Enter 0 to exit"<<endl;
        cout<<"1.push()"<<endl;
        cout<<"2.pop()"<<endl;
        cout<<"3.isEmpty()"<<endl;
        cout<<"4.isFull()"<<endl;
        cout<<"5.peek()"<<endl;
        cout<<"6.count()"<<endl;
        cout<<"7.change()"<<endl;
        cout<<"8.display()"<<endl;
        cout<<"9.Clear Screen"<<endl;

        cin>>option;

        switch(option)
        {
        case 0:
            break;
        case 1:
            cout<<"Enter an item to push in the stack:"<<endl;
            cin>>value;
            s1.push(value);
            break;
        case 2:

            cout<<"Pop function called "<<endl;
            cout<<s1.pop()<<endl;
            break;
       case 3:
           if(s1.isEmpty())
            cout<<"Stack is Empty"<<endl;
           else
            cout<<"Stack is not empty"<<endl;
           break;
       case 4:
        if (s1.isFull())
            cout<<"Stack is full"<<endl;
        else
            cout<<"Stack is not full"<<endl;
        break;
       case 5:
           cout<<"What Position of item you wanna peek:"<<endl;
               cin>>position;
               cout<<"Peeked  Value at position "<<position<<" is: "<<s1.peek(position)<<endl;
               break;
       case 6:
        cout<<"Count function Called - Number of Items in the Stack are:"<<s1.count()<<endl;
        break;

       case 7:
        cout<<"Change function called"<<endl;
        cout<<"Enter position of item you wanna cahange:";
        cin>>position;
        cout<<"Enter Value of item you wanna change:";
        cin>>value;
        s1.change(position,value);
        break;
       case 8:
        s1.display();
        break;

       case 9:
        system("cls");

       default:
        cout<<"Enter proper option "<<endl;
        }


    }while(option!=0);
}

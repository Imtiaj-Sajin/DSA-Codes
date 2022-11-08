#include<iostream>
using namespace std;
#include<bits/stdc++.h>

class Product{

public:
    string productName;
    int id;
    string category;
    float unit_Price;
    Product(string productName,int id,string category,float unit_Price)
    {
       this->productName=productName;
       this->id=id;
       this->category=category;
       this->unit_Price=unit_Price;
    };

    string getPName()
    {
        return productName;
    }

   void display(){
    cout<<"Product Name: "<<productName<<endl;
    cout<<"Product ID: "<<id<<endl;
    cout<<"Product Category: "<<category<<endl;
    cout<<"Unit Price Completed: "<<unit_Price<<endl;
    }

};

int main()
{
    Product s[5]={Product("Rice",2334,"Food",56),Product("Tea",1121,"Cafe products",110),
    Product("Bread",5402,"Snacks",30),Product("Tootpaste",4104,"Toiletries",85),Product("Chicken",910,"Food",175)};

    int option;
    int count=0;
    do{

    cout<<"What operation do you want to perform?Select option number.Enter 0 to exit"<<endl;
    cout<<"1)Display Products\n2)Price Wise selection Sort\n3)Price Wise bubble Sort\n4)Search Products\n5)clear Screen"<<endl;
    cin>>option;
    switch(option)
    {
    case 0:
        break;

    case 1:
        {
        for(int i=0;i<5;i++)
          {
            s[i].display();
            cout<<"\n";
          }
        break;
        }

    case 2:
        {
        int minIndex =0;
        cout<<"Your sorted Products: "<<endl;

       for(int i=0;i<5;i++)
       {
           minIndex=i;
           for(int j=i+1;j<5;j++)
           {
               if(s[minIndex].unit_Price>s[j].unit_Price)
               {
                   minIndex=j;
               }
           }
           Product temp=s[minIndex];
           s[minIndex]=s[i];
           s[i]=temp;
       }

        for(int i=0;i<5;i++)
        {
            s[i].display();

            cout<<endl<<"--------------------------"<<endl;
        }
    break;
        }

    case 3:
        {

        for(int i=0; i<5; i++)
        {
         for(int j=0; j<(5-1); j++)
            {
                if(s[j].unit_Price > s[j+1].unit_Price)
                {
                    Product temp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=temp;

                }
            }
        }

        for(int i=0;i<5;i++)
            {
                s[i].display();
                cout<<"\n";
            }
        break;
        }


   case 4:
        {
        string srch;
        cout<<"Enter Product you wanna search: ";
        cin>>srch;
        int flag=0;

        for(int i=0; i<5; i++)
            {
                if(s[i].getPName() == srch)
                    {
                        s[i].display();
                        cout<<"\n";
                        flag++;
                        break;
                    }
            }
             if(flag==0)
                    {
                        cout<<"Not Found"<<endl;
                    }
        break;

        }
        case 5:
            {
                system("cls");
                break;
            }


default:
    {
     cout<<"Take proper option:"<<endl;
     break;
    }
    }
    }while(option!=0);

}

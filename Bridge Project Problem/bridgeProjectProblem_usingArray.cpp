#include<bits/stdc++.h>
using namespace std;

class car{
public:
    int car_no;
    string date;
    int ticket_no;
    string type;

    car(int car_no,string date,int ticket_no,string type){
        this->car_no=car_no;
        this->date=date;
        this->type=type;
        this->ticket_no=ticket_no;
        }
        car(){}

    void showData(){
        cout<<"Car Number:"<<car_no<<endl;
        cout<<"Date:"<<date<<endl;
        cout<<"ticket number:"<<ticket_no<<endl;
        cout<<"Type:"<<type<<endl;
        cout<<endl;
    }

};
class vehicleType{
    public:
       car cars[500];
       int n=0,rate=0,counterEarning=0;
       string type;

    vehicleType(int rate,string type){
        this->type=type;
        this->rate=rate;
    }
    void addCar(){
        car car;
        cout<<"Car Number:";
        cin>>car.car_no;
        cout<<"Date:";
        cin>>car.date;
        cout<<"Ticket Number:";
        cin>>car.ticket_no;
        car.type=type;
        cars[n]=car;
        n++;
        counterEarning=counterEarning+rate;
    }
    void search(int c_no)
    {
        for(int i=0;i<n;i++)
        {
            if(cars[i].car_no==c_no)
            {
                cout<<"(Found)"<<endl;
                cars[i].showData();

            }
            else
                cout<<"(no da  ta found)"<<endl;
        }
    }
    void showEverything(){
        for (int i = 0; i < n; i++)
            {
                cout<<"showing all colected data of "<<type<<" type"<<endl;
                cars[i].showData();
                
            }
    }

};
/*class Queue {

public:
    int car_array[size];
    int front = 0;
    int rear = -1;

    int enqueue(int a){
        if(rear >= size-1){
            cout<<"Queue is full..."<<endl;
            return 0;
        }
        car_array[++rear] = a;
        return 0;
    }

    int dequeue(){

        if(rear < front){
            cout<<"Queue is empty..."<<endl;
            return 0;
        }

        ++front;
        return 0;
    }

    void printQueue(){
        for(int i=front; i<=rear; i++){
            cout<<car_array[i]<< " ";
        }
        cout<<endl;
    }
};
*/

int main()
{
    int option;
    system("color 5f");

    vehicleType heavy=vehicleType(800,"Heavy");
    vehicleType medium=vehicleType(500,"Medium");
    vehicleType light=vehicleType(300,"Light");
    do{
    cout<<"Enter option:\n1)add car\n2)Search Car\n3)Counter wise Earing\n4)total earning\n5)Show Cars"<<endl;
    cin>>option;
    switch(option)
    {
        case 1:
            {
            cout<<"Vehicle Type:\n1)heavy\n2)medium\n3)Light"<<endl;
            int g;
            cin>>g;
            if(g==1){
                heavy.addCar();
                }
            else if(g==2){
                medium.addCar();
                }
            else if(g==3){
                light.addCar();
                }
            else
                cout<<"Wrong Input"<<endl;
            }
            break;
        case 2:

            {
            cout<<"Vehicle Type:\n1)heavy\n2)medium\n3)Light"<<endl;
            int x,car_no;
            cin>>x;
            cout<<"Enter the number of vehicle: ";
            cin>>car_no;
            if(x==1){
                if(heavy.n==0)
                cout<<"NO car added in this section"<<endl;
                else
                heavy.search(car_no);}
            else if(x==2){
                if(medium.n==0)
                cout<<"NO car added in this section"<<endl;
                else
                medium.search(car_no);}
            else if(x==3){
                if(light.n==0)
                cout<<"NO car added in this section"<<endl;
                else
                light.search(car_no);}
            }

            break;
        case 3:
    system("color E0");
            {
            cout<<"Earnings in heavy cars section:"<<heavy.counterEarning<<endl;
            cout<<"Earnings in medium cars section:"<<medium.counterEarning<<endl;
            cout<<"Earnings in light cars section:"<<light.counterEarning<<endl;
            }
            break;
        case 4:
            cout<<"Total Earnings:"<<heavy.counterEarning+medium.counterEarning+light.counterEarning<<endl;
            break;
        case 5:
            {
    system("color cf");

            cout<<"Vehicle Type:\n1)heavy\n2)medium\n3)Light"<<endl;
            int g;
            cin>>g;
            if(g==1){
                if(heavy.n==0)
                cout<<"NO car added in this section"<<endl;
                else                
                heavy.showEverything();
                }
            else if(g==2){
                if(heavy.n==0)
                cout<<"NO car added in this section"<<endl;
                else                
                medium.showEverything();
                }
            else if(g==3){
                if(heavy.n==0)
                cout<<"NO car added in this section"<<endl;
                else                
                light.showEverything();
                }
            else
                cout<<"Wrong Input"<<endl;
            }
            break;


    }
    }while (option!=0);
   
    return 0;
    
}

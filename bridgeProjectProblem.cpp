#include <iostream>
#define size 500
using namespace std;

class car{
public:
    string car_no;
    string date;
    string ticket_no;
    string type;

    car(string car_no,string date,string ticket_no,string type){
        this->car_no=car_no;
        this->date=date;
        this->type=type;
        this->ticket_no=ticket_no;
        }
        car(){}

    void showData(){
        cout<<"Car Number:"<<car_no<<endl;
        cout<<"Date:"<<date<<endl;
        cout<<"ticket number"<<ticket_no<<endl;
         cout<<"Type:"<<type<<endl;
    }

};
class vehicleType{
    public:
       car cars[500];
       int n=0,rate=0,counterEarning=0;
       string type;

    vehicleType(int rate,string type){
        this->type;
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
    void search(string c_no)
    {
        for(int i=0;i<n;i++)
        {
            if(cars[i].car_no==c_no)
            {
                cout<<"Found"<<endl;
                cars[i].showData();

            }
            else
                cout<<"no data found"<<endl;
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
    cout<<"Enter option:\n1)add car\n2)Search Car\ntotal earning"<<endl;
    int n;
    cin>>n;
    vehicleType heavy=vehicleType(800,"Heavy");
    vehicleType medium=vehicleType(500,"Medium");
    vehicleType light=vehicleType(300,"Light");
    switch(n)
    {
        case 1:
            {
            cout<<"Vehicle Type:\n1)heavy\n2)medium\n3)Light"<<endl;
            int g;
            cin>>g;
            if(g==1)
                heavy.addCar();
            else if(g==2)
                medium.addCar();
            else if(g==3)
                light.addCar();
            }
            break;
        case 2:

            {
            cout<<"Vehicle Type:\n1)heavy\n2)medium\n3)Light"<<endl;
            int h;
            cin>>h;
            if(h==1)
                heavy.search();
            else if(h==2)
                medium.search();
            else if(h==3)
                light.search();
            }

            break;

    }

    return 0;
}

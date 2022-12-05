#include<iostream>
using namespace std;
#define size 500

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
class vehicleTypeQueue {

public:
    car carArr[size];
    int front = 0;
    int rear = -1;
       
       int n=0,rate=0,counterEarning=0;
       string type;

    vehicleTypeQueue(int rate,string type){
        this->type=type;
        this->rate=rate;
    }
    int enqueue(car a){
        if(rear >= size-1){
            cout<<"Queue is full..."<<endl;
            return 0;
        }
        carArr[++rear] = a;
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
        cout<<"showing all colected data of "<<type<<" type"<<endl;
        for(int i=front; i<=rear; i++)
        {
            carArr[i].showData();
            cout<<endl;
        }
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
        
        enqueue(car);
        n++;
        counterEarning=counterEarning+rate;
    }

    
    void search(int c_no)
    {
        for(int i=0;i<n;i++)
        {
            if(carArr[i].car_no==c_no)
            {
                cout<<"(Found)"<<endl;
                carArr[i].showData();

            }
            else
                cout<<"(no da  ta found)"<<endl;
        }
    }
};


int main()
{
    int option;
    // system("color 5f");

    vehicleTypeQueue heavy=vehicleTypeQueue(800,"Heavy");
    vehicleTypeQueue medium=vehicleTypeQueue(500,"Medium");
    vehicleTypeQueue light=vehicleTypeQueue(300,"Light");
    do{
    cout<<"Enter option:\n1)add car\n2)Search Car\n3)Counter wise Earing\n4)total earning\n5)Show Cars\n0)For Exit press 0"<<endl;
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
    // system("color cf");

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
    // system("color E0");
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
    // system("color cf");

            cout<<"Vehicle Type:\n1)heavy\n2)medium\n3)Light"<<endl;
            int g;
            cin>>g;
            if(g==1){
                if(heavy.n==0)
                cout<<"NO car added in this section"<<endl;
                else                
                heavy.printQueue();
                }
            else if(g==2){
                if(heavy.n==0)
                cout<<"NO car added in this section"<<endl;
                else                
                medium.printQueue();
                }
            else if(g==3){
                if(heavy.n==0)
                cout<<"NO car added in this section"<<endl;
                else                
                light.printQueue();
                }
            else
                cout<<"Wrong Input"<<endl;
            }
            break;
    case 0:break;
    default:
        {cout<<"Enter Proper Otion";}
        break;


    }
   
    }while (option!=0);
   
    return 0;
    
}
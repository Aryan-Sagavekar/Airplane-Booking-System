#include<iostream>
using namespace std;

class customer{
public:
    int  passport_id,phone_no;
    struct namae{
        string f,l;
    }name;
    struct date{
        int d;
        int m;
        int y;
    }date;
public:
    virtual void get(){
        cout<<"enter full name\n";
        cin>>name.f>>name.l;
        cout<<"enter contact number\n";
        cin>>phone_no;
        cout<<"enter passport id\n";
        cin>>passport_id;
    }    
};

class domestic: public customer {
    int a;
    int ticket_price=3000;
    enum domestic_destinations{Pune=1,Delhi=4,Kolkata=5,Jaipur=3,Banglore=3};
public:
    void get(){
        cout<<"enter where you want to go\n";
        cout<<"1.Pune\n2.Delhi\n3.Kolkata\n4.Jaipur\n5.Banglore\n";
        cin>>a;
        cout<<"select the date of departure(DD MM YYYY):"; //show flights
        cin>>date.d>>date.m>>date.y;
    }
    void cal_price(){
        domestic_destinations d;
        if(a==1){
           d=Pune;
        }
        else if(a==2){
            d=Delhi;
        }
        else if(a==3){
            d=Kolkata;
            
        }
        else if(a==4){
            d=Jaipur;
        }
        else if(a==5){
            d=Banglore;
        }
        else{
        cout<<"Enter Valid Input :O";//CAN USE THROW AND CATCH
        exit(0);
        }
        cout<<"Do you want \n1.Veg Meals\t2.Non Veg Meals?";
        int t;
        cin>>t;
        ticket_price+=t*1000;
        ticket_price*=d;
        cout<<"Your ticket price will be:"<<ticket_price;
    }
};

class international:public customer{
    int a,ticket_price=10000;
    enum international_destinations{NY=5,T=4,SP=2,D=1,L=4};
    public:
    void get(){
        cout<<"enter where you want to go\n";
        cout<<"1.New York\n2.Tokyo\n3.Singapore\n4.Dubai\n5.London\n";
        cin>>a;
        cout<<"select the date of departure(DD MM YYYY):"; //show flights
        cin>>date.d>>date.m>>date.y;
    }
    void cal_price(){
        international_destinations i;
        cout<<"Do you want 1.Veg\t2.Non-Veg Meals?";
        int meal_choice;
        cin>>meal_choice;
        int m=2000;
        if(meal_choice==2){
            m+=2000;
        }
        if(a==1){
            m+=3000;
            i=NY;
            ticket_price+=5000;
        }
        else if(a==2){
            m+=2000;
            i=T;
            ticket_price+=6000;
        }
        else if(a==3){
            i=SP;
        }
        else if(a==4){
            i=D;
            ticket_price+=5000;
        }
        else if(a==5){
            m+=3000;
            i=L;
            ticket_price+=8000;
        }
        else{
            cout<<"Invalid Choice :O"; //CAN USE THROW AND CATCH
        }
        ticket_price*=i;
        cout<<"Your ticket price will be:"<<ticket_price;
    }
};

int main()
{   

}
#include <bits/stdc++.h>
#include <time.h>
#include <fstream>
using namespace std;
time_t timer;
struct date{
    int d;
    int m;
    int y;
};

class flights{
    long price;
    struct date dof;
    string ini, fin;

    public:
    void data_insertion_dom(){
        ofstream o("domFlights.txt",ios::app);
        cout<<"Initial flight position: ";
        cin>>ini;
        o<<ini<<"    ";
        cout<<"Final flight position: ";
        cin>>fin;
        o<<fin<<"    ";
        cout<<"Price: ";
        cin>>price;
        o<<price<<"    ";
        cout<<"Date of flight: ";
        cin>>dof.d>>dof.m>>dof.y;
        o<<dof.d<<" "<<dof.m<<" "<<dof.y<<endl;
        o.close();
    }

    void data_insertion_int(){
        ofstream o("intFlights.txt",ios::app);
        cout<<"Initial flight position: ";
        cin>>ini;
        o<<ini<<"    ";
        cout<<"Final flight position: ";
        cin>>fin;
        o<<fin<<"    ";
        cout<<"Price: ";
        cin>>price;
        o<<price<<"    ";
        cout<<"Date of flight: ";
        cin>>dof.d>>dof.m>>dof.y;
        o<<dof.d<<" "<<dof.m<<" "<<dof.y<<endl;
        o.close();
    }
};

int main(){
    flights fl;
    while(1){
        int ch;
        cout<<"Enter choice:\n";
        cout<<"1. Enter domestic Flight details\n2. Enter international Flight details\n4.EXIT\n";
        cin>>ch;
        switch(ch){
            case 1:{
                fl.data_insertion_dom();
                break;
            }
            case 2:{
                fl.data_insertion_int();
                break;
            }
            case 4: exit(1);
            default: cout<<"Please enter valid choice";
        }
    }
}
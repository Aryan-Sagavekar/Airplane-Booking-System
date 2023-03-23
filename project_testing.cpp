#include <bits/stdc++.h>
#include <fstream>
using namespace std;

void func(){
    ofstream o("protest.txt",ios::app);
    o<<" is my name";
    o.close();
}

int main(){

    string name = "hello";
    ofstream oout("protest.txt",ios::app);
    
    oout<<name;
    func();
    oout.close();

    ifstream i("protest.txt");
    getline(i,name);
    cout<<name[name.size()-3];
    i.close();
}
#include<iostream>
using namespace std;

class Cricketer{
public:
    string name;
    int runs;
    float avg;

    Cricketer(string name, int runs, float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

     
};   

// void change(Cricketer* c){  use of pointer to cahnge the value of avg.
//     (*c).avg = 77.2;
//     c->avg = 79.9;      both are same
// }

int main(){
    Cricketer c1("Virat", 25000, 85.5);

    // cout<<c1.avg<<endl;  85.5
    // change(&c1);
    // cout<<c1.avg<<endl;  77.2

    // Cricketer c2("Rohit sharma", 40000, 90.8);

    Cricketer* p1 = &c1;
    cout<<(*p1).runs<<endl; //c1.runs    p1->runs    
    cout<<c1.avg<<endl;
    (*p1).avg = 77.5;       //p1->avg = 77.5;
    cout<<c1.avg<<endl;

    // int x = 5;
    // cout<<&x<<endl; // address
    // int* p = &x; 
    // cout<<p<<endl; //address 
    // cout<<*p<<endl; //value
    // *p = 100; // x = 100           *p dereference operator
    // cout<<x<<endl; // 100

    return 0;
}
#include<iostream>
using namespace std;

class Scooty{
public:
    int topSpeed;
    float mileage;
    virtual void sound(){  
        cout<<"Vroom Vroom"<<endl;
    }
private:
    int bootSpace;
};

class Bike: public Scooty{
public:
    int gears;
    void sound(){
        cout<<"Dhroom Dhroom"<<endl;
    }
};

class SuperBike: public Scooty{
public:
    int gears;
    void sound(){
        cout<<"Zroom Zroom"<<endl;
    }
};

int main(){
    Scooty* b = new Bike(); // Object pointer
    b->sound();

    Scooty* c = new SuperBike(); // Object pointer
    c->sound();
}

// without virtual keyword it will print "vroom vroom" for the object pointer : Scooty* b = new Bike();
// this is called function overriding

// without virtual keywoard both would print "Vroom Vroom"

// Output: Dhroom Dhroom
//         Zroom Zroom
#include<iostream>
using namespace std;

class Scooty{ // parent class
public:
    int topSpeed;
    float mileage;
private:
    int bootSpace;
};

// --------> public 
class Bike : public Scooty{ // child class -> derived class
public:
    int gears;
};

int main(){
    Bike b;
    b.topSpeed = 180;
    b.mileage = 25.5;
    b.gears = 5;
    // b.bootSpace = 5;
    // cannot access private members when declared public

    cout<<b.gears<<" "<<b.mileage<<" "<<b.topSpeed<<endl;
}
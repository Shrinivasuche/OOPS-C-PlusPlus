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

int main(){
    Cricketer c1("Virat", 25000, 85.5);
    Cricketer* c2 = new Cricketer("Rohit sharma", 18000, 47.8);

    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2->name<<" "<<c2->runs<<endl;

    return 0;
}
#include<iostream>
using namespace std;

class Cricketer{
public:
    string name;
    int runs;

    Cricketer(string name, int runs){
        // this is correct way
        // name = n;
        // runs = r;

        // but this is wrong
        // name = name;
        // runs = runs;

        // but we use this keyword for the same parameters by which we got errors
        this->name = name;
        this->runs = runs;
    }
};

int main(){
    Cricketer c1("Virat", 25000);

    cout<<c1.name<<" "<<c1.runs<<endl;
    return 0;
}
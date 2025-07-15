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

    /*
    // can pass parameters to the function but it is advisable to 
    // use different names of the parameters or use this keyword while 
    // using the  variables declared in the class(member functions)
    */


    void print(){  // -------->third method called class functions
        cout<<name<<" "<<runs<<" "<<avg<<endl;

        // can also use this operator in this print function
        // cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
    } 
};

// void print(Cricketer c){-------------->second method
//     cout<<c.name<<" "<<c.runs<<" "<<c.avg<<endl;
// }   

int main(){
    Cricketer c1("Virat", 25000, 85.5);
    Cricketer c2("Rohit sharma", 40000, 90.8);
    // can also manipulate using . operator
    // c1.name = "Sachin";

    c1.print();
    c2.print();

    // print(c1);

    // cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;--------->first method
    return 0;
}

// output
// Virat 25000 85.5
// Rohit sharma 40000 90.8
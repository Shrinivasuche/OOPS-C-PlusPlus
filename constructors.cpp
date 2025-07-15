#include<iostream>
using namespace std;

class Student{
public:
    string name;
    float gpa;
    int rno;

    // constructor
    // same as class name but without return type

    Student(){ // default constructor

    }
    Student(string s , int r){ // parameterised constructor
        name = s;
        rno = r;
    }

    Student(string s , int r, float g){ // parameterised constructor
        name = s;
        rno = r;
        gpa = g;
    }
};

int main(){
    // done by parameterized constructor
    Student s1("Shrinivas", 101, 8.3);
    
    // done by default constructor
    Student s2;
    s2.name = "something";
    s2.gpa = 8.1;
    s2.rno = 10;

    Student s3("Shri", 1001);
    s3.gpa = 7.4;

    Student s5 = s1; // deep copy(pass by value)
    s5.name = "change";

    Student s6(s1); // copy constructor --> (deep copy)
    s6.name = "vijay";

    cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<endl;
    cout<<s2.name<<" "<<s2.gpa<<" "<<s2.rno<<endl;
    cout<<s3.name<<" "<<s3.gpa<<" "<<s3.rno<<endl;
    cout<<s5.name<<" "<<s5.gpa<<" "<<s5.rno<<endl;
    cout<<s6.name<<" "<<s6.gpa<<" "<<s6.rno<<endl;
    // cout<<s2.name<<" "<<s2.gpa<<" "<<s2.rno<<endl;
    // print(s1);
    return 0;
}
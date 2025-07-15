#include<iostream>
using namespace std;

class Student{
public:
    string name;
    float gpa;
    int rno;
};

void print(Student s1){
    cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<endl;
}

void change(Student s1){
    s1.name = "human";
}

int main(){
    Student s1;
    s1.name = "Shrinivas";
    // s1.gpa = 8.3;
    s1.rno = 101;
    cin>>s1.gpa;
    //--------------------------------------------
    print(s1);
    change(s1); //pass by value
    print(s1);
    //--------------------------------------------

    Student s2;
    s2.name = "something";
    s2.gpa = 8.1;
    s2.rno = 10;

    // cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<endl;
    // cout<<s2.name<<" "<<s2.gpa<<" "<<s2.rno<<endl;
    //print(s1);
    return 0;
}
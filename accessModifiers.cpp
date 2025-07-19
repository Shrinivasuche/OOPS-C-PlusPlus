#include<iostream>
using namespace std;

class Student{
public:
    int rno;
    string name;
    Student(){

    }

    // should not create a constructor inside private access
    Student(int rno, string name, float marks){
        this->rno = rno;
        this->name = name;
        this->marks = marks; 
    }

    // void display(){
    //     cout<<"Roll no : "<<rno<<endl;
    //     cout<<"Name : "<<name<<endl;
    //     cout<<"Marks : "<<marks<<endl;
    // }

    float getMarks(){ // getter
        return marks;
    }
    void setMarks(float m){ // setter
        marks = m;
    }
private:
    float marks;
};

int main(){
    // parameterized constructor can use the private members of the class.
    // and here marks can be initialized by this parameterized type object.
    
    Student s1(101, "Shrinivas", 8.3);

    // but cannot change or print the marks value by . operator
    // s1.marks = 8.5;
    // cout<<s1.marks<<endl;;


    // getter------------------------>>>
    // this is true
    // s1.display();
    // cout<<s1.getMarks()<<endl;;
    // ---------------------------------

    // setter ----------->>>>>
    s1.setMarks(8.9);


    // but in parameterized method we can print the marks by creating a function inside the class itself.
    cout<<s1.getMarks()<<endl;
    
    // this type uses default constructor, so we cannot use the marks outside the class.
    Student s2;
    s2.rno = 88;
    s2.name = "shriniajsdhfgiuj";
    // s2.marks = 200;


    
}
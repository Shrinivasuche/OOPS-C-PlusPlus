#include<iostream>
using namespace std;

class Vector{
public:
    int size;
    int capacity;
    int* arr;
    Vector(){
        size = 0;
        capacity = 1;
        arr = new int[1];
    }

    // function to add the elements to the vector
    void add(int ele){
        if(size == capacity){
            capacity *= 2;
            int* arr2 = new int[capacity];
            for(int i=0; i<size; i++){
                arr2[i] = arr[i];
            }
            arr = arr2;   
        }
        arr[size++] = ele;
        
    }

    // function to print the elements
    void print(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    // function to get element by index
    int get(int idx){
        if(size == 0){
            cout<<"Array is empty."<<endl;
            return -1;
        }
        if(idx >= size || idx < 0){
            cout<<"Invalid index."<<endl;
            return -1;
        }
        return arr[idx];
    }

    // function to remove the last element from the vector
    void remove(){
        if(size == 0){
            cout<<"Array is empty."<<endl;
        }
        size--;
    }
};   

int main(){
    Vector v;

    // adding elements to the vector
    cout<<"the size and capacity are: ";
    cout<<v.size<<" "<<v.capacity<<endl;
    v.add(10);
    v.print();
    cout<<"the size and capacity are: ";
    cout<<v.size<<" "<<v.capacity<<endl;
    
    v.add(11);
    v.print(); 
    cout<<"the size and capacity are: ";
    cout<<v.size<<" "<<v.capacity<<endl;
    
    v.add(12);
    v.print(); 
    cout<<"the size and capacity are: ";
    cout<<v.size<<" "<<v.capacity<<endl;
    
    v.add(14);
    v.print();
    cout<<"the size and capacity are: ";
    cout<<v.size<<" "<<v.capacity<<endl;
    
    v.add(14);
    v.print();
    cout<<"the size and capacity are: ";
    cout<<v.size<<" "<<v.capacity<<endl;

    // accessing the value by index
    v.get(10);

    // removing elements from the vector
    v.remove();

    cout<<"the size and capacity are: ";
    cout<<v.size<<" "<<v.capacity<<endl;
    
    return 0;
}
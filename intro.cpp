#include<iostream>
using namespace std;

int main()
{
    int a=10;
    float b=7.5;
    cout<<&a<<" "<<&b<<endl;

    //create a pointer that can store the address of a
    //as a is an integer variable, so we need a pointer that can store address of integer type
    //as b is float variable, so we need a poiter that can store address of float type

    int *ptr=&a; // ptr=0x61ff08
    cout<<ptr<<endl;
    float *ptr1=&b;
    cout<<ptr1<<endl;

    //dereference opertor (*) is used for accessing the value present at the address
    cout<<*ptr<<endl;
    cout<<*ptr1<<endl;

    // x=23 and *ptr=23 is the same thing i.e the value will be updated to 23

    //getting the address of ptr and ptr1

    cout<<&ptr<<endl;
    cout<<&ptr1<<endl;
}
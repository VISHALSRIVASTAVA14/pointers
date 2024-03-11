#include<iostream>
using namespace std;

int main()
{
    int *wild; //wild pointer
    cout<<wild<<" "<<*wild<<endl;
    int *ptr=NULL; //null pointer (can also be initialised with 0)
    cout<<ptr<<" "<<*ptr<<endl;

    int *dangling=NULL; //dangling pointer 
    {
        int x=10;
        dangling=&x;
        cout<<dangling<<" ";
    }
    cout<<dangling<<endl;

    int a=20;
    float f=3.14;
    void *abc=&a; // void pointer(they cannot be dereferenced directly. for accessing the value we use typecasting)
    abc=&f;

    int *b=(int*)a;
    cout<<b;
}
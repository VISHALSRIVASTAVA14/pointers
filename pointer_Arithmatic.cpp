#include<iostream>
using namespace std;

int main()
{
    int a=5;
    double b=2.5;

    int *x=&a;
    double *y=&b;

    cout<<x<<" "<<x+1<<endl;
    cout<<y<<" "<<y+1<<endl;

    cout<<x<<" "<<x-2<<endl;
    cout<<y<<" "<<y-3<<endl;
}
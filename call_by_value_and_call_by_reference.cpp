#include<iostream>
using namespace std;

// call by value
void swap(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
}

//call by refernce
void swap2(int * x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int x,y;
    cout<<"enter the value of x:";
    cin>>x;
    cout<<"enter the value of y:";
    cin>>y;

    int *p1=&x;
    int *p2=&y;

    swap(x,y);
    swap2(p1,p2);

    cout<<x<<" "<<y;
}
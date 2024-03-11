#include<iostream>
using namespace std;

int main()
{
    int x,y,sum;
    cout<<"enter the value of x:";
    cin>>x;
    cout<<"enter the value of y:";
    cin>>y;

    int *ptrx=&x;
    int *ptry=&y;
    int *ptrsum=&sum;

    *ptrsum=*ptrx+*ptry;
    cout<<"sum is:"<<sum;
}
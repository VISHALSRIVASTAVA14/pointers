#include<iostream>
using namespace std;

void compute(string a,char ch,int *first,int *last)
{
    int i;
    for(i=0;i<a.size();i++)
    {
        if(a[i]==ch)
        {
            *first=i;
            break;
        }
    }
    for(i=a.size();i>=0;i--)
    {
        if(a[i]==ch)
        {
            *last=i;
            break;
        }
    }
}

int main()
{
    string a="aabbaabbacde";
    char ch='a';
    int first,last;

    int *f=&first;
    int *l=&last;

    compute(a,ch,f,l);

    cout<<*f<<" "<<*l;
}
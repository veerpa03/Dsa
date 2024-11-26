#include<iostream>
using namespace std;

int main()
{
    //COPYING A POINTER
    int num = 5;
    int *p = &num;
    int *q = p;
    cout<<p<<" - "<<q<<endl;
    cout<<*p<<" - "<<*q<<endl;

    //Important concepts
    int i = 5;
    int *t = &i;
    cout<<"Before: "<<t<<endl;
    t=t+1;
    cout<<"After: "<<t<<endl;



    int j=5;
    int *x;
    x=&j;
    cout<<x<<endl;
    cout<<&x<<endl;

}
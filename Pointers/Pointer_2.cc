#include<iostream>
using namespace std;


int main()
{
    //This is pointer will be pointing to some garbage address
    // int *p; this is bad practice to avoid

    // cout<<*p<<endl;

    //int i=5;
    //int *p=&i;


    //Another way to initialize the pointetrs
    // int *p=0;
    // p=&i;

    // cout<<p<<endl;
    // cout<<*p<<endl;

    int num=5;
    int a=num;


    cout<<num<<endl;

    int *p =&num;
    cout<<"Before: "<<num<<endl;
    (*p)++;
    cout<<"After: "<<num<<endl;
    cout<<a<<endl;


    return 0;
}
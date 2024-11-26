#include<iostream>
using namespace std;

int main()
{
    int num = 5;
    
    cout<<num<<endl;

    int *ptr=&num;//* is the derefrence operator.

    cout<<*ptr<<endl; //*p is the value at the address of num which 5 here.

    cout<<"This is ptr without * operator and will print the address of num: "<<ptr<<endl;

    cout<<"Size of num variable: "<<sizeof(num)<<endl;
    cout<<"Size of pointer ptr: "<<sizeof(ptr)<<endl;

    return 0;
}
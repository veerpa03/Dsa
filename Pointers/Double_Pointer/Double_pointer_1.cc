#include<iostream>

using namespace std;

int main() {
    
    //int =val;
    //int *ptr=&val; // In this using we know that the value is int type
    int i=5;
    int* p=&i;
    int** p2=&p;
    //cout<<"Good"<<endl;

    cout<<"Printing p: "<<p<<endl;
    cout<<"Address p: "<<&p<<endl;
    cout<<"Content in *p2: "<<p2<<endl;
    cout<<"Content of i: "<<**p2<<endl;


    return 0;
}
#include<iostream>

using namespace std;

int main() {
    
    int arr[10]={2,5,6};
    cout<<"Address of first memory block is: "<<arr<<endl; 
    cout<<"Address of first memory block is: "<<&arr[0]<<endl;

    cout<<"4th: "<<*arr<<endl;
    cout<<"1st: "<<*(arr+1)<<endl;
    cout<<": "<<*(arr) +1<<endl;
    cout<<": "<<1[arr]<<endl;

    return 0;
}
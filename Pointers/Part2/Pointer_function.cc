#include<iostream>

using namespace std;

void print(int *p){

    cout<<*p<<endl;

}

void update(int *p){

    //p=p+1;
    *p=*p+1;

}

int getsum(int arr[], int n)
{
    int sum=0;
    for (size_t i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
    
}

int main() {
    
    int value=5;
    int *p=&value;
    //print(p);
    cout<<"Before : "<<*p<<endl;
    update(p);
    cout<<"After  : "<<*p<<endl;

    int arr[5]={1,2,3,4,5};
    cout<<"Sum: "<<getsum(arr+2,3)<<endl;

    return 0;
}
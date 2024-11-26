#include<iostream>

using namespace std;

int main() {
    
    //int arr[6]={11,91,31,112,111,313};

    char arr[]= "abcde";
    int i=5;
    int *ptr=&i;
    char *p= &arr[0];
    cout<<*ptr<<endl;

    return 0;
}
#include<iostream>

using namespace std;

int getsum(int* arr, int n)
{
    int sum=0;
    for (size_t i = 0; i < n; i++)
    {
        sum+=arr[i];
    }

    return sum;
    
}

int main() {
    
    int n;
    cin>>n;
    int* arr=new int[n];

    for (size_t i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int ans = getsum(arr,n);
    cout<<"The sum: "<<ans<<endl;
    return 0;
}
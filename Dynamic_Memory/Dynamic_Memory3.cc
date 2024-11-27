#include<iostream>

using namespace std;
//In this we will learn about the  dynamic memory with the 2d array
int main() {
    
    int row;
    cin>>row;
    int col;
    cin>>col;
    int** arr = new int*[row];

    //Creating an 2d array
    for (int i = 0; i < row; i++)
    {
        arr[i]=new int[col];
    }
    
    //Taking input
    for (int i = 0; i < row; i++)
    { 
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
        
    }


    cout<<endl;
    //Show output
    for (int i = 0; i < row; i++)
    { 
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }

    //Realising memory
     for (int i = 0; i < row; i++)
    {
        delete []arr[i];
    }
    delete []arr;

    return 0;
}
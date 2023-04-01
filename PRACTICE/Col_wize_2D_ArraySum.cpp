#include<bits/stdc++.h>
using namespace std;

//Function to print col wize sum
void ColSum(int arr[][3],int row,int col)
{
    cout<<"The sum is---->"<<endl;
    for(int col = 0;col<3;col++){
        int sum = 0;
        for(int row =0;row<3;row++){
            sum += arr[row][col];


        }
        cout<<sum<<" ";
    }
    cout<<endl;
    
    }

int main(){
     int arr[3][3];

     cout<<" Enter the elements"<<endl;

     for(int col=0;col<3;col++){
        for(int row =0;row<3;row++){
            cin>>arr[row][col];
        }
        
     }

     cout<<"Printing the array"<<endl;

     for(int row=0;row<3;row++){
        for(int col = 0;col<3;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
     }


     ColSum(arr,3,3);
     return 0;
}

/*
The output is--
 Enter the elements
2
3
4
5
6
7
8
2
3
Printing the array
2 5 8
3 6 2
4 7 3
The sum is---->
9 18 13
*/
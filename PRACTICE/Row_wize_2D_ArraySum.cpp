#include<bits/stdc++.h>
using namespace std;

bool isPresent2( int arr[][3],int target,int row, int col){
    for(int row = 0;row<3;row++){
        for(int col=0;col<3;col++){
            if(arr[row][col]== target){
                return 1;
            }
        }
    }

    return 0;
}

//We will ceate the function to print row wize sum 
void PrintSum(int arr[][3],int row,int col){
     //Row wize input lene ke liye loops chalte hain

     cout<<"Printing the sum--->"<<endl;
     for(int row =0;row<3;row++){
        int sum = 0;
        for(int col=0;col<3;col++)
        {
            sum+= arr[row][col];
        }
        cout<<sum<<" ";
        /*
        Humne is code mai kia kya we initialize first sum = 0.then when we go to the first row then jitne bhi us row mai elements hain sbko plus krdo
        and then sum se print kar do
        */
     }
     cout<<endl;
}


int main(){ 
    int arr[3][3];
    cout<<"Enter the elements"<<endl;
    for(int row = 0;row<3;row++)
    {
        for(int col =0;col<3;col++){

            cin>> arr2[row][col];
        } 
    } 
  
    cout<<"Printing the array"<<endl;
    //print

    for(int row = 0;row<3;row++){
        for(int col = 0;col<3;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }


    cout<<"Enter the element to search"<<endl;
    int target;
    cin>>target;

    if(isPresent2(arr,target,3,3)){
        cout<<"Element found"<<endl;

    }

    else{
        cout<<"Not found"<<endl;
    }
    PrintSum(arr,3,3);
    return 0;

}


/*
  >>>The output will be
        
        
      
Enter the elements
2
3
4
5
6
7
8
9
11
Printing the array
2 3 4
5 6 7
8 9 11
Enter the element to search
5
Element found
Printing the sum--->
9 18 28

*/
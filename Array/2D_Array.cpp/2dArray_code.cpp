#include<bits/stdc++.h>
using namespace std;
  //function banate hain

  bool isPresent (int arr[][3],int target,int row,int col){
    //we need to specify the column size,when passing 2d array as a parameter.
//Har element par jaa ke dekhunga ki ye value hai ya nahi.
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){

            if(arr[row][col] == target){
                return 1;
            }
        }
       
    } 
     return 0;

}
    //tp print row wise sum
    void printSum(int arr[][3],int row,int col){
        cout<<"Print sum----->>"<<endl;
        for(int row = 0;row<3;row++){
            int sum = 0;

            for(int col =0;col<3;col++){
                sum+= arr[row][col];
            }
            cout<< sum << " ";
        }
        cout<<endl;
    }

 



 int main(){

//    create a 2d array
    //int arr[3][4] ={1,2,3,4,5,6,7,8,9,10,11,12};

    int arr[3][3];
    //it means when we have hard code means we have already given array as input then our print function will work
    //and print the array row wize or col wize
    
    //and if i want to fill the rows according to me then the code will--->
    //int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    //input le lia. but row wize han it means --> it takes input row wize first row will fil then column
    for(int row =0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>> arr[row][col];
        }
    }
    

/*
    but if we want to take input by column wize then?

    we will run first row by column

    for(int col=0;col<4;col++){
        for(int row=0;row<3;row++){
            cin>>arr[row][col];
        }
    }
   */

    //print kar do
    for(int row=0;row<3;row++)
{
    for(int col= 0;col<3;col++){
        cout<<arr[row][col]<<" ";

    }
    cout<<endl;
}

    cout<<"Enter the element to search"<<endl;
    int target;
    cin>>target;
    
    //Search ke liye ek function banate hain

    if(isPresent(arr, target,3,3)){
        cout<<"Element is Found"<<endl;
    }
    else {
        cout<<"Not Found"<<endl;
    }           
//jraa sum wala function use kARTE hain. 
    printSum(arr,3,3);

    return 0; 
}
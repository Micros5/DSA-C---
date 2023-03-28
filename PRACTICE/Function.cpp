/*we write a function to print a  sum of a 2D array basically we are making  row wize sum
it means the sum will be row wize in matrix
*/

//Function is--->

void PrintSum(int arr[][4],int row, int col){
    cout<<"Print the sum --->>"<<endl;

    for(int row=0;row<3;row++){
        int sum = 0;

        for( int col=0;col<4;col++){
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}



/*
And if we want to print column wize sum then what we will do?
let's code this 


*/

void PrintSumCol(int arr[][4], int row, int col){
    cout<<"Print the Sum --->>"<<endl;
        //if we want to print column wize then we  will use for loop for column first 
    for(int col = 0;col<4;col++){
        int sum  =0;

        for(row =0;row<3;row++){
            sum += arr[row][col];
        }
        cout<<sum<<" ";

    }
    cout<<endl;
}

/*
Basically code mai ho kya raha hai ki....if we consider col wise function to addition so first
for loop is for first column and jitne bhi row uske under aate hain sb ka addition karke print kardo.
simple
*/



//Function call bhi to karni hai...so how we will call the function

//for row wise-->
PrintSum(arr,3,4);

//for column wise---->
PrintSumCol(arr,3,4)

//because we make different different functions for both different operation.





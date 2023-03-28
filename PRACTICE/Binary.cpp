#include<iostream>
using namespace std;
    int BinaryS(int arr[],int size,int key){

        int start = 0;
        int end =size-1;

        int mid = (start +end)/2;

        while(start<=end){

            if(arr[mid]==key){
                return mid;
            }

            //right side ka dekhenge kese jana hai..

            if(key>arr[mid]){

                start = mid +1;
            }
            //left side jaate hain jra

            else{
                end = mid-1;
            }

            mid = (start+end)/2;

        }
        return -1;
    }
int main(){

    int A[6] = {3,5,7,12,15,23};
    int B[4] = {4,66,55,47};

  //  int INDEX  = BinaryS(A,6,15);

   // cout<<"index of 15 is : "<<INDEX<<endl;

    int INDEX = BinaryS(B,4,47);

    cout<<"index of 47 is : "<<INDEX<<endl;



    return 0;
}
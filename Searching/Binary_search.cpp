#include<iostream>
using namespace std;

    int BinarySearch(int arr[],int size,int key){
        int start = 0;
        int end = size-1;

        int mid = (start + end)/2;
        while(start <= end){

            if(arr[mid] == key){
                return mid;
            }
            //go to  right side
            if(key > arr[mid]){
                start = mid+1;
            }

            //go to left side
            else{
                end = mid-1;
            }

            mid = (start+end)/2;
        }
        return -1;
    }

int main(){

        int even[6] = {2,4,6,8,10,12};
        int odd[5] = {3,5,7,9,11};

        int index =    BinarySearch(even,6,12);
         // int index =    BinarySearch(even,6,20);

        cout<<"Index of 12 is :" <<index<<endl;

        int oddIndex = BinarySearch(odd,5,11);

        cout<<"Index of 11 in odd index is"<<index<<endl;

    return 0;
}
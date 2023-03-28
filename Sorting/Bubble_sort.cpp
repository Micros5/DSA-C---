#include<iostream>
using namespace std; 

/*void bubbleSort(vector<int>& arr,int n){

    for(int i = 1;i<n;i++){
        //for round 1 to n-1

        for(int j =0;j<n-i;j+++){
            //process all elements n-i takk ke index ko 
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        } 
    }
}
*/

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i = 0;i<n;i++){
        cin >>arr[i];
    }


    int counter = 1;

    while(counter <n){
        for(int i = 0;i<n-counter;i++){
            if(arr[i]<arr[i+1]){
                //swap boths
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
       
    }
     cout<<endl;

}
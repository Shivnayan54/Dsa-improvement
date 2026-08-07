#include<iostream>
using namespace std; 

// Scecond Largest Element in an array 

int SecondLargest(int arr[] , int n){

    int largest = arr[0]; 
    int second = -1; 

    for(int i=1; i<n ;i++){ 

        if(arr[i] > largest){
            second = largest; 
            largest = arr[i]; 
        }
        else if(arr[i] > second && arr[i] != largest){ 
            second = arr[i];
        }
    }
    return second; 
} 
  
int main(){
    int arr[] = {10 ,20 ,30 ,40 , 50}; 
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = SecondLargest(arr , n);

    cout<< "The Second Largest Element in the array is: " << result << endl;
    return 0; 
}
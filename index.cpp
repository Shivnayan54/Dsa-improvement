#include<iostream>
using namespace std; 

int largestElement( int arr[], int n){

    int largest = arr[0]; 

    for(int i = 0; i < n ; i++)
    
    if( largest < arr[i]){
        largest = arr[i]; 
    }

    return largest ; 
}    

int main(){
    
    int arr[] = {10 , 20, 30, 40, 50}; 

    int n = sizeof(arr) / sizeof(arr[0]); 

    int ans = largestElement(arr , n); 

    cout<< "Largest element is: " << ans; 
    
    return 0; 

}
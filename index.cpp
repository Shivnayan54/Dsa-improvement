#include<iostream>
using namespace std; 

void LeftRotateByOne( int arr[] , int n){

    int first = arr[0]; 

    for(int i=0; i<n-1 ; i++)
    { 
        arr[i] = arr[i+1]; 
    }
    
    arr[n - 1] = first ; 
}

void printArray(int arr[] , int n)
{
    for (int i=0; i<n ; i++){ 
        cout<< arr[i] << " "; 

    }
}

int main(){
     int arr[] = {1, 2,3 ,4 ,5 }; 
     int n = 5; 

     LeftRotateByOne(arr , n); 
     printArray(arr , n); 

     return 0; 
}
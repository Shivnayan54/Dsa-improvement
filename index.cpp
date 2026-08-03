#include<iostream>
using namespace std; 

int sumArray(int arr[] , int n){ 

    int sum = 0; 

    for(int i=0; i<5; i++){ 
        
        sum += arr[i] ;
    }

    return sum; 

}

int main() { 
    int n; 
    cout<<"enter the size of the array: "; 
    cin>>n; 

    int arr[n]; 
    
    cout<< "Enter " << n <<" elements: " << endl; 
    for(int i=0; i<n ; i++) {
        cin>> arr[i] ; 
    } 

    int totalSum = sumArray(arr, n); 
    cout << "The sum of the array element is: " << totalSum << endl; 

    return 0;
}
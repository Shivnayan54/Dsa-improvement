#include<iostream>
using namespace std; 

void oddeven(){
    
    int n; 
    cout<<"enter a number: " ;
     cin>>n ;

     if( n %2 ==0) { 
        cout<<"even number";  
     }else {
        cout<<"odd number";  
     }
}

int main(){ 

    oddeven() ; 
}
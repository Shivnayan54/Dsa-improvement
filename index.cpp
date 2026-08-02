#include<iostream>
using namespace std; 

int fact (){ 

    int factor = 1; 
    int n = 5; 
    for (int i=n; i>0 ;i--){
        factor *= i ;  
    }

    return factor; 
}

int main(){ 

   cout<< fact() ; 
    return 0; 

}
#include<iostream>
#include<string>
using namespace std;

void reverseString(string &s){
    int left = 0; 
    int right = s.length() - 1; 

    while(left<right){
        char temp = s[left]; 
        s[left] = s[right]; 
        s[right] = temp; 

        left++; 
        right--; 
    }
}

int main() { 
    string s = "meeaw"; 

    reverseString(s);

    cout<<s; 
    return 0;
}
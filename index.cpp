#include<iostream>
#include<string>
using namespace std;

int main() 
{ 
    string h = "hello"; 
    int vowels = 0; 
    int consonents = 0; 
    
    for(int i=0; i< h.length()-1; i++){ 

        char ch = h[i]; 

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowels++; 
        }
        else if(ch >= 'a' && ch <= 'z')
        {
            consonents++; 
        }
    }

    cout << "vowels = " << vowels << endl; 
    cout << "Consonants = " << consonents; 

    return 0; 
}
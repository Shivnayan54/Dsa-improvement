#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "hello"; 

    int vowels = 0;                                               
    int consonants = 0;                                     

    for(int i = 0; i < s.length(); i++)                          
    {                                                    
        char ch = s[i];                                                                         

        if(ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u')
        {
            vowels++;
        }
        else if(ch >= 'a' && ch <= 'z')
        {
            consonants++;
        }
    }

    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants;

    return 0;
}
/*
Question: Count the vowels
Write a C++ program that accepts a word and counts the number of vowels present in it.

Vowels are a, e, i, o, u and their uppercase equivalents.

Example 1
Input: programming
Output: 3


Example 2
Input: Education
Output: 5


Example 3
Input: rhythm
Output: 0


Example 4
Input: AEIOU
Output: 5


Constraints
- Input contains only English alphabetic characters.
- Word length: 1–1000 characters.
- Both uppercase and lowercase vowels must be counted.
- Do not use built-in counting algorithms.
*/


#include <iostream>
using namespace std;

int main() {
    int count = 0;
    string word;
    cout<<"Enter the word : ";
    cin>>word;

    for (int i = 0; i < word.length(); i++)
    {
        if (word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u' || word[i]=='A' || word[i]=='E' || word[i]=='I' || word[i]=='O' || word[i]=='U')
        {
            count++;
        }
    }
    cout<<"the number of vovels are : "<<count;
    
    return 0;
}
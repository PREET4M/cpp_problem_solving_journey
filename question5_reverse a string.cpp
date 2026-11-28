/*
Question: Reverse a string
Write a C++ program that accepts a word and reverses it.

However, you must store the reversed word inside a string variable before printing it.

Example 1
Input: hello
Output: olleh


Example 2
Input: programming
Output: gnimmargorp


Example 3
Input: radar
Output: radar


Example 4
Input: A
Output: A


Constraints
- String length: 1–1000 characters.
- Do not use the built-in reverse() function.
- Do not simply print characters in reverse order.
- Preserve uppercase and lowercase characters.
- Aim for O(n) time complexity.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout<<"Enter a word : ";
    string word, word_reversed;
    cin>>word;
    cout<<"Old word : "<<word<<endl;
    for (int i = word.length()-1; i >=0 ; i--)
    {
        word_reversed.push_back(word[i]);
    }

    cout<<"Reversed word : "<< word_reversed;
    
    return 0;
}
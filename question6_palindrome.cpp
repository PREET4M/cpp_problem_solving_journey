/*
Question: Check whether a string is a palindrome
A palindrome is a word that reads the same forwards and backwards.

Write a C++ program that accepts a word and determines whether it is a palindrome.

Example 1
Input: madam
Output: Palindrome


Example 2
Input: hello
Output: Not a palindrome


Example 3
Input: racecar
Output: Palindrome


Example 4
Input: a
Output: Palindrome


Example 5
Input: abba
Output: Palindrome


Constraints
- String length: 1–1000 characters.
- Input contains only lowercase English letters.
- Do not use built-in reversal functions.
- Do not create another string to store the reversed word.
- Aim for O(n) time and O(1) auxiliary space.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout<<"Enter the word : ";
    string word, word_reversed;
    cin>>word;

    for (int i = word.length()-1 ; i >= 0 ; i--)
    {
        word_reversed.push_back(word[i]);
    }
    
    if (word == word_reversed)
    {
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"not an palindrome"<<endl;
    }
    
    return 0;
}
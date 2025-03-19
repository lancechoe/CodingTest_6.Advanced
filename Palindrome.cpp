/*
Problem
You are given a word consisting only of lowercase English letters. Determine whether the word is a palindrome.

A palindrome is a word that reads the same forward and backward.

For example, "level" and "noon" are palindromes, whereas "baekjoon", "online", and "judge" are not.

Input
The first line contains a word. The length of the word is between 1 and 100, inclusive, and it consists only of lowercase English letters.

Output
Print 1 if the word is a palindrome, otherwise print 0.
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string word;
    string word2;

    cin >> word;
    
    word2 = word;
    reverse(word.begin(), word.end());

    if(word == word2){
        cout << "1";
    }
    else{
        cout << "0";
    }
}
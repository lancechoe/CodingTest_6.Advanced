/*
Problem
You are given a word consisting of uppercase and lowercase English letters. Determine the most frequently used letter in the word. The comparison is case-insensitive.

Input
The first line contains a word composed of uppercase and lowercase English letters. The length of the word does not exceed 1,000,000.

Output
Print the most frequently used letter in uppercase. If there are multiple letters with the highest frequency, print "?" instead.
*/
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string word;
    cin >> word;

    int alpha[26] = {0};  // 알파벳 개수 저장 배열
    int maxCount = 0;
    char maxChar = '?';

    // 알파벳 개수 세기 (대소문자 구분 없이)
    for (char ch : word) {
        ch = toupper(ch);  // 대문자로 변환
        alpha[ch - 'A']++; // 해당 알파벳 카운트 증가
    }

    // 가장 많이 나온 알파벳 찾기
    for (int i = 0; i < 26; i++) {
        if (alpha[i] > maxCount) {
            maxCount = alpha[i];
            maxChar = 'A' + i;
        } else if (alpha[i] == maxCount) {
            maxChar = '?'; // 최대값이 여러 개면 '?'
        }
    }

    cout << maxChar << endl;
    return 0;
}
/*
문제
Not so long ago, before operating systems were as powerful as they are today, computers (which often had turbo buttons on the exterior) couldn't handle certain letters of the Croatian alphabet. Programmers agreed to use two or three-letter substitutions as in this table:

Letter	Characters
č	c=
ć	c-
dž	dz=
đ	d-
lj	lj
nj	nj
š	s=
ž	z=
For example, the word ljes=njak consists of six letters in the Croatian alphabet: lj, e, š, nj, a, k. 

Write a program that calculates the number of letters in the given word. 

입력
The first line contains a string of at most 100 characters. Only lowercase letters of the English alphabet and characters '–' and '=' will appear. 

The string will represent a word encoded as described above. 

출력
Output the number of letters in the input word. 
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cin >> word;

    int count = 0;

    for (int i = 0; i < word.length(); i++) {
        count++; // 기본적으로 하나의 글자로 카운트

        // Check for two-character Croatian letters
        if (i < word.length() - 1) {
            if (word[i] == 'c' && (word[i + 1] == '=' || word[i + 1] == '-')) 
                i++;
            else if (word[i] == 'd' && word[i + 1] == '-') 
                i++;
            else if (word[i] == 'l' && word[i + 1] == 'j') 
                i++;
            else if (word[i] == 'n' && word[i + 1] == 'j') 
                i++;
            else if (word[i] == 's' && word[i + 1] == '=') 
                i++;
            else if (word[i] == 'z' && word[i + 1] == '=') 
                i++;
        }

        // Check for the special three-character "dž"
        if (i < word.length() - 2) {
            if (word[i] == 'd' && word[i + 1] == 'z' && word[i + 2] == '=')
                i += 2;
        }
    }

    cout << count << endl;
    return 0;
}
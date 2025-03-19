/*
Problem
Observe the given example and identify the pattern to print the stars accordingly.

Input
The first line contains an integer 
𝑁
N (1 ≤ 
𝑁
N ≤ 100).

Output
Print stars in a specific pattern from the first line to the 
2
×
𝑁
−
1
2×N−1th line.
*/

#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n;

    for(int i=1;i<n+1;i++){
        for(int k=n-i;k>0;k--){
            cout << " ";
        }
        
        for(int l=2*i-1;l>0;l--){
            cout << "*";
        }
        
        cout << "\n";
    }

    for(int i=n-1;i>0;i--){
        for(int k=n-i;k>0;k--){
            cout << " ";
        }
        
        for(int l=2*i-1;l>0;l--){
            cout << "*";
        }
        
        cout << "\n";
    }
}
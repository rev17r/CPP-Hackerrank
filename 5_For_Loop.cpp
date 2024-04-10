//Hackerrank 5-https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true

#include <iostream>
#include <string.h>
using namespace std;

int main() {
    // Complete the code.
    int a,b,i;
    
    string words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    cin >> a;
    cin >> b;
    
    for(i=a; i<=b; i++)
    {
        if(i<=9)
        {
            cout << words[i] << endl;
        } 
        else if(i%2 == 0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
        
    }
    
    return 0;
}
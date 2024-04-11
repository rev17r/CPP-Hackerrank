// Hackerrank 6- https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true

// Solution

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d) {
    if ((a > b ) && (a > c) && (a > d)) {
        return a;
        //cout << a << endl;
    }
    
    if ((b > a ) && (b > c) && (b > d)) {
        return b;
        //cout << b << endl;
    }
    
    if ((c > a ) && (c > b) && (c > d)) {
        return c;
        //cout << c << endl;
    }
    
    if ((d > a ) && (d > b) && (d > c)) {
        return d;
        //cout << d << endl;
    }
    
    return 0;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
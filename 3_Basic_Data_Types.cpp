// Hackerrank 3- https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?isFullScreen=true

// Solution

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long l;
    char ch;
    float fl;
    double d;
    
    cin >> a >> l >> ch >> fl >> d;
    //scanf("%d%ld%c%f%lf",&a,&l,&ch,&fl,&d);
    printf("%d\n%ld\n%c\n%f\n%lf\n",a,l,ch,fl,d);
    
    return 0;
}
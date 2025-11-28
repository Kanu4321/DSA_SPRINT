//1. Write a program to take two integers as input and print their sum, difference, product, and quotient (integer division only).
#include<iostream>
using namespace std;
int main () {
    int a,b,c;
    cout << "Enter two numbers :";
    cin >> a;
    cin >> b;
    c = a+b;
    cout << "SUM : " << c;
    return 0;
}
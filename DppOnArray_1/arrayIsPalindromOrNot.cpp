#include <iostream>
using namespace std;

int main () {
    int arr[5]={5,6,3,6,5};
    int isPalindrom = 1;
    for (int i=0;i<5;i++) {
        if(arr[i]!=arr[5-1-i]) {
            isPalindrom=0;
        }
    }
    if (isPalindrom==1)
    cout << "Array is palindrom";
    else
    cout << "Array is not palindrom";
}
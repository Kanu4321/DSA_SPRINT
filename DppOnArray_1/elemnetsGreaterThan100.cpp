#include <iostream>
using namespace std;
int main () {
    int arr[5]={609,7,567,46,9};
    cout << "Elements greater than 0 are ";
    for(int i=0;i<5;i++) {
        if (arr[i]>100) {
            cout << arr[i] << "  ";
        }
    }
    return 0;
}
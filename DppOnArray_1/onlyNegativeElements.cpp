#include <iostream>
using namespace std;
int main () {
    int arr[5]={6,-7,5,-4,-9};
    cout << "Negative elements of array is ";
    for(int i=0;i<5;i++) {
        if (arr[i]<0){
            cout << arr[i] << " , ";
        }
    }
    return 0;
}
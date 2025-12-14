#include <iostream>
using namespace std;

int main () {
    int arr[5]={3,4,5,2,1};
    int n;
    cout << "Enter index key :";
    cin >> n;
    if (n>=5)
    cout << "invalid index key";
    else{
    cout << "Your element at index key is ";
    cout << arr[n];
    }
}
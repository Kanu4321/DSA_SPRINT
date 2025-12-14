#include <iostream>
using namespace std;

int main() {
    int arr[5] = {600, 7, 567, 46, 30};

    cout << "Updated array is ";
    for (int i = 0; i < 5; i++) {
        arr[i] *= arr[i];
        cout << arr[i] << " ";
    }

    return 0;
}

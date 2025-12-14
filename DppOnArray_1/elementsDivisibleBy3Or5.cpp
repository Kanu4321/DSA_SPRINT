#include <iostream>
using namespace std;
int main () {
    int arr[5]={600,7,567,46,30};
    cout << "Elements divisible by 3 and 5 are " ;
    for(int i=0;i<5;i++) {
        if (arr[i]%3 == 0 && arr[i]%5 == 0){
            cout << arr[i] << "  ";
        }
    }
    return 0;
}
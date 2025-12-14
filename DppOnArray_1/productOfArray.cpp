#include <iostream>
using namespace std;
int main () {
    int arr[5]={6,7,5,4,9};
    int product=1;
    for (int i=0;i<5;i++){
        product *= arr[i];
    }
    cout << "Product is " << product << endl;
    return 0;
}
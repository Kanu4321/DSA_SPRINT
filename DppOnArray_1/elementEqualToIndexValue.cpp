#include <iostream>
using namespace std;

int main () {
    int arr[5]={3,4,2,9,4};
    cout << "Elements value equal to its index ";
    for(int i=0;i<5;i++){
        if(arr[i]==i){
            cout << arr[i] << " ";
        }
    }
}
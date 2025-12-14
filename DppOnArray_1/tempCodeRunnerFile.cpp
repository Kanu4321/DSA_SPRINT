#include <iostream>
using namespace std;
int main () {
    int arr[5]={609,7,567,46,9};
    cout << "Prime numbers are " ;
    for(int i=0;i<5;i++) {
        int isPrime=1;
        if(arr[i] <=1)
        isPrime =0;
        for (int j=2;j*j<arr[i];j++) {
            if( arr[i] % j == 0){
                isPrime =0;
                break;
            }
        }
        if(isPrime =1){
            cout << arr[i] << "  ";
        }
    }
    return 0;
}
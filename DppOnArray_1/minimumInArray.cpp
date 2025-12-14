#include <iostream>
using namespace std;
int main () {
    int arr[5]={6,7,5,4,9};
    int min =arr[0];
    for (int i=0;i<5;i++) {
        if (min >arr[i]){
            min = arr[i];
        }
    }
    cout<< "min is " << min<<endl;
    return 0;
}
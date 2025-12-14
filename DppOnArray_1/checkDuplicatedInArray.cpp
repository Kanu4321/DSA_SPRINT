#include <iostream>
using namespace std;

int main() {
    int arr[5]={3,5,6,7,3};
    int isDuplicate = 0;
    for (int i=0;i<5;i++){
        for (int j=i+1;j<5;j++) {
            if(arr[i] == arr[j]){
                isDuplicate = 1;
                break;
            }
            if (isDuplicate == 1)
            break;
        }
    }
    if (isDuplicate==0)
    cout << "No duplicate element";
    else 
    cout << "There is dupliate element";
}

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter no. of lines";
    cin >> n;
    for (int i=0;i<n;i++){
        int a=1;
        for(int j=n-i;j>0;j--){
            cout << a;
            a++;
        }
        cout << endl;
    }
}
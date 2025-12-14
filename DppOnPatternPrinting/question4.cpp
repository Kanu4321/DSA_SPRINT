#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter maximum no. of star in a line :";
    cin >> n;
    for (int i=0;i<n;i++){
        for (int j=0;j<i+1;j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int a=n;a>0;a--){
        for (int b=0;b<a-1;b++){
            cout << "* ";
        }
        cout << endl;
    }
}
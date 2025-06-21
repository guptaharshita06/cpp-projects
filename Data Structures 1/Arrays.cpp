// Arrays

#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size) {
    cout << "Printing the Array" << endl;
    for(int i=0;i<size;i++) {
        cout << arr[i] << " ";
    }
    cout << "Printing Done" << endl;
}
int main() {
    int number[15];

    cout << "Value at 15 index" << number[14] << endl;

    // cout << "Value at 20 index" << number[20] << endl;
    int second[3] = {5,7,11};

    cout << "Value at 2 index" << second[2] << endl;

    int third[15] = {2,7};

    int n=15;
    printArray(third, 15);

    int fourth[10] = {0}; 
    n=10;
    printArray(fourth, 10);

    int fifth[10] = {1};
    n=10;
    printArray(fifth, 10);

    int fifthSize = sizeof(fifth)/sizeof(int);
    cout << "Size of Fifth is" << fifthSize << endl;

    cout << endl << "Everything is fine" << endl << endl;

    return 0;
}

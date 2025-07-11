//This is the code for 2-dimensional array

#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int i, int j) {

    for(int i =0; i<3; i++) {
        for(int j=0;j<4;j++) {
            if( arr[i][j] == target) {
                return 1;
            }
        }
    }
    return 0;
}

//to print row wise sum
void printSum(int arr[][4], int i, int j) {
    cout << "Printing Sum -> " << endl;
    for(int i =0; i<3; i++) {
        int sum = 0;
        for(int j =0; j<4; j++) {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main() {
    int arr[3][4];

    cout << "Enter the elements " << endl;
    for(int i =0;i<3;i++) {
        for(int j=0;j<4;j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Printing the elements " << endl;
    for(int i=0;i<3;i++) {
        for(int j=0;j<4;j++) {
            cout<< arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the element to search "<< endl;
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 4)) {
        cout << "Element found " << endl;
    }
    else {
        cout << "Not found " << endl;
    }

    return 0;
}

#include<iostream>
using namespace std;
int main() {
    int arr[3] = {10,20,30};
    int (*ptr)[3] = &arr;

    cout << "arr: " << arr << endl;
    cout << "&arr: " << &arr << endl;
    cout << "ptr: " << ptr << endl;
    cout << "*ptr: " << *ptr << endl;
}

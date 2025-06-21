#include<bits/stdc++.h>
using namespace std;
int main() {
    int num = 5;
    cout << num << endl;
    cout << "Address of num is: " << &num << endl;

    int *ptr = &num;
    cout << "Value of the pointer is: " << *ptr << endl;
    cout << "Address of the pointer is: " << &ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << "Address of pointer is: " << &p2 << endl;
    cout << "Value of the pointer is: " << *p2 << endl;

    cout << "Size of integer is: " << sizeof(num) << endl;
    cout << "size of pointer is: " << sizeof(ptr) << endl;
    cout << "Size of pointer is: " << sizeof(p2) << endl;
    return 0;
}

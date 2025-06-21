#include<bits/stdc++.h>
using namespace std;
int main() {
    // int *ptr = 0;
    // cout << *ptr << endl;
    // cout << &ptr << endl;

    // int i = 5;

    // int *q = &i;
    // cout << &q << endl;
    // cout << *q << endl;
    // int *p = 0;
    // p = &i;
    // cout << *p << endl;
    // cout << &p << endl;
    // cout << &i << endl;

    int a = 5;
    int num = a;
    a++;

    int *ptr = &num;
    cout << "before: " << num << endl;
    (*ptr)++;
    cout << "after: " <<num << endl;

    cout << num << endl;
    return 0;
}

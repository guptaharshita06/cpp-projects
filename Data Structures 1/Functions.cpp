//This is the basic code for writing a function in c++.
//Function makes the code simpler.
//function makes the code mre readable by stop redifining things again and again.

#include<bits/stdc++.h>
using namespace std;
void printName(string name) {
    cout << "Hey" << name;
}
int main() {
    string name;
    cin >> name;
    printName(name);
    return 0;
}

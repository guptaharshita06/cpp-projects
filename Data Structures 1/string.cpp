#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main() {
    // //declaration
    // string str;
    // //initialize
    // string name = "Babbar";
    // string fullName = "Love Babbar";

    // //input
    // //cin >> s;
    // getline(cin, str);
    // cout << "Output: " << str << endl;
    // cout << "Length: " << str.length() << endl;
    // str.push_back('X');
    // cout << "Output: " << str << endl;
    // cout << "Length: " << str.length() << endl;
    // str.pop_back();
    // cout << "Output: " << str << endl;
    // cout << "Length: " << str.length() << endl;
    // cout << str[0] << endl;

    // string firstname = "love";
    // string lastname = "babbar";
    // string fullname = firstname + " " + lastname;

    // cout << fullname << endl;
    // cout << "length: " << fullname.length() << endl;
    // fullname.clear();
    // cout << "length: " << fullname.length() << endl;
    // if(fullname.empty()) {
    //     cout << "String ki length 0 h" << endl;
    // }
    // else {
    //     cout << "String ki length non zero h" << endl;
    // }
    // cout << fullname << endl;
    // cout << "Hi" << endl;

    // string name = "babbar";
    // cout << *name.begin();
    // cout << name.front() << endl;
    // reverse(name.begin(), name.end());
    // cout << name;

    string name = "abcdefghij";
    cout << name.substr(2) << endl;
    cout << name.substr(1,5) << endl;
    


    return 0;
}

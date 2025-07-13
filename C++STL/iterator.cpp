#include<iostream>
#include<vector>
#include<forward_list>
using namespace std;
int main() {
    //Forward Iterator
    forward_list<int> list;

    list.push_front(10);
    list.push_front(20);
    list.push_front(30);

    //traverse using iterator
    forward_list<int>::iterator it = list.begin();

    while(it != list.end()) {
        cout << *it << " ";
        (*it) = (*it) + 5;
        it++;
    }

    it = list.begin();
    while(it != list.end()) {
        cout << *it << " ";
        it++;
    }

//    vector<int> arr;
//     arr.push_back(10);
//     arr.push_back(20);
//     arr.push_back(30);

//     vector<int>::iterator it = arr.begin();

//     while(it != arr.end()) {
//         cout << *it << " ";
//         it++;
//     }


    return 0;
}

#include<iostream>
#include<vector>
#include<string>
using namespace std;

void print(int arr[], int size, int index) {
    if(index >= size) {
        return;
    }
    cout << arr[index] << " ";
    print(arr, size, index+1);   
}

void reversePrint(int *arr, int size) {
    if(size == 0) {
        return;
    }
    cout << arr[size-1] << " ";
    reversePrint(arr, size-1);
}

int searchInArray(int arr[], int size, int target) {
    int n = size;
    for(int i=0;i<size;++i) {
        int value = arr[i];
        if(value == target) {
            return value;
        }
        cout << endl;
    }
    return -1;
}

int minElement(int arr[], int size) {
    int minEle = arr[0];
    for(int i=0;i<size;++i) {
        if(arr[i] < minEle) {
            minEle = arr[i];
        }
    }
    return minEle;
}

int maxElement(int arr[], int size) {
    int maxEle = arr[0];
    for(int i=0;i<size;++i) {
        if(maxEle > arr[0]) {
            maxEle = arr[i];
        }
    }
    return maxEle;
}

void getMinElement(int arr[], int n, int index, int &mini) {
    if(index >= n) {
        return;
    }
    mini = min(mini, arr[index]);
    getMinElement(arr,n,index+1,mini);
}

void getMaxElement(int arr[], int n, int index, int &maxi) {
    if(index >= n) {
        return;
    }
    maxi = max(maxi, arr[index]);
    getMaxElement(arr,n,index+1,maxi);
}

void printOdd(int arr[], int size, int index) {
    if(index >= size) {
        return;
    }
    if(arr[index] & 1) {
        cout << arr[index] << " ";
    }
    printOdd(arr,size,index+1);
}

void printEven(int arr[], int size, int index) {
    if(index >= size) {
        return;
    }
    if(!(arr[index] & 1)) {
        cout << arr[index] << " ";
    }
    printEven(arr,size,index+1);
}

void printDigits(int num) {
    if(num == 0) {
        return ;
    }
    int digit = num%10;
    cout << digit << " ";
    num = num/10;
    printDigits(num);
}

int main() {
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int index = 0;
    // print(arr, size, index);
    // cout << endl;
    // reversePrint(arr , size);
    // cout << endl;
    // int target = 50;
    // cout << search(arr, size, index, target) << endl;
    // int maxi = INT_MIN;
    // getMaxElement(arr,size,index,maxi);
    // cout << "Max: " << maxi << endl;
    // printOdd(arr, size,index);
    printDigits(429);
    return 0;
}

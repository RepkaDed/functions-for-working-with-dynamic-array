#pragma once
#include <iostream>
using namespace std;
void PrintArray(int arr[], int size) {
    cout << " ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
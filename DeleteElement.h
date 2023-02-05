// Функция удаления элемента по указанному индексу.
#pragma once
#include <iostream>
using namespace std;
int* DeleteElement(int* source, int& size1, int index) {
    int new_size = size1 - 1;
    int* temp = new int[new_size];
    for (int i = 0, j = 0; i < size1; ++i) {
        if (i == index) continue;
        temp[j] = source[i];
        j++;
    }
    size1 = new_size;
    return temp;
}
// Функция вставки элемента по указанному индексу.
#pragma once
#include <iostream>
using namespace std;
int* InsertElement(int* source, int& size1, int index, int element) {
    int new_size = size1 + 1;
    int* temp = new int[new_size];
    for (int i = 0; i < index; ++i) {
        temp[i] = source[i];
    }
    temp[index] = element;
    for (int i = index + 1, j = index; i < new_size; ++i, ++j) {
        temp[i] = source[j];
    }
    size1 = new_size;
    return temp;
}

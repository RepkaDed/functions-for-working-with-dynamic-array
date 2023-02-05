// Функция добавления элемента в конец массива.
#pragma once
#include <iostream>
using namespace std;
int* AddElement(int* source, int* size, int element) {
    int* temp = new int[*size + 1];
    for (int i = 0; i < *size; ++i) {
        temp[i] = source[i];
    }
    temp[*size] = element;
    *size = *size + 1;
    return temp;
}
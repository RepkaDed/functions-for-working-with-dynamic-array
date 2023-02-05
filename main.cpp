/*БВ 215
Афанасьев Антон Анатольевич
Задание 1. Написать следующие функции для работы с динамическим массивом:
Функция добавления элемента в конец массива.
Функция вставки элемента по указанному индексу.
Функция удаления элемента по указанному индексу.*/

#include <iostream>
#include "PrintArray.h"
#include "AddElement.h"
#include "InsertElement.h"
#include "DeleteElement.h"
using namespace std;

int main() {
    int size = 4;
    int *arr = new int[4]{1, 2, 3, 4};
    PrintArray(arr, size);

    arr = AddElement(arr, &size, 10);
    PrintArray(arr, size);

    int size1 = 5;
    int *arr1 = new int[5]{1, 2, 3, 4,5};
    arr1 = InsertElement(arr1, size1, 2, 7);
    PrintArray(arr1, size1);

    arr1 = DeleteElement(arr1,size1,2);
    PrintArray(arr1, size1);
    return 0;
}

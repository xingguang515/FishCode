#include "KIntArray.h"
#include <iostream>

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    KIntArray arr(size);

    std::cout << "Input array elements: ";
    arr.inputArray();

    std::cout << "Array elements: ";
    arr.outputArray();

    int dataToDelete;
    std::cout << "Enter a number to delete from the array: ";
    std::cin >> dataToDelete;
    arr.deleteData(dataToDelete);

    std::cout << "Array after deletion: ";
    arr.outputArray();

    return 0;
}

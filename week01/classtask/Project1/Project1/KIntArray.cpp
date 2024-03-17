#include "KIntArray.h"
#include <iostream>
#include <algorithm>

KIntArray::KIntArray(int n) : m_len(n) {
    m_array = new int[m_len];
}

KIntArray::~KIntArray() {
    delete[] m_array;
}

void KIntArray::inputArray() {
    for (int i = 0; i < m_len; ++i) {
        std::cin >> m_array[i];
    }
}

void KIntArray::outputArray() {
    for (int i = 0; i < m_len; ++i) {
        std::cout << m_array[i] << " ";
    }
    std::cout << std::endl;
}

void KIntArray::deleteData(int data) {
    int* new_array = new int[m_len - 1];
    int j = 0;
    for (int i = 0; i < m_len; ++i) {
        if (m_array[i] != data) {
            new_array[j++] = m_array[i];
        }
    }
    if (j == m_len) {
        // Data not found, do not change the array.
        delete[] new_array;
    }
    else {
        delete[] m_array;
        m_array = new_array;
        m_len = j;
    }
}


#pragma once
#ifndef KINTARRAY_H
#define KINTARRAY_H

class KIntArray {
public:
    KIntArray(int n);
    ~KIntArray();
    void inputArray();
    void outputArray();
    void deleteData(int data);

private:
    int* m_array;
    int m_len;
};

#endif

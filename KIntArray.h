#pragma once
#include<iostream>
using namespace std;
// KIntArray类，完成下面的要求。
class KIntArray
{
public:
    // 使用长度为n的int数组初始化类，地址赋给m_array,长度赋给m_len
    KIntArray(int n);

        // 释放数组空间
    ~KIntArray();


        // 从标准输入读取m_len个数值并存储到m_array中
    void inputArray();

        // 输出数组
    void outputArray();


        // 删除data这个数值
    void deleteData(int data);

private:
    int* m_array;
    int m_len;
};
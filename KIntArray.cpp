#include"KIntArray.h"

// 使用长度为n的int数组初始化类，地址赋给m_array,长度赋给m_len
KIntArray::KIntArray(int n)
{
    // 为m_array分配n个int的空间
    m_array = new int[n];
    // 将m_len赋值为n
    m_len = n;
}

// 释放数组空间
KIntArray::~KIntArray()
{
    // 释放m_array指向的内存
    if (m_array != nullptr) {
        delete[] m_array;
    }
    cout << "析构函数调用" << endl;
}

// 从标准输入读取m_len个数值并存储到m_array中
void KIntArray::inputArray()
{
    // 使用循环从标准输入读取m_len个数值
    for (int i = 0; i < m_len; i++)
    {
        // 读取一个数值并存储到m_array[i]中
        std::cin >> m_array[i];
    }
}

// 输出数组
void KIntArray::outputArray()
{
    // 使用循环输出m_array中的每个元素，用空格隔开
    for (int i = 0; i < m_len; i++)
    {
        // 输出m_array[i]和一个空格
        std::cout << m_array[i] << " ";
    }
    // 输出一个换行符
    std::cout << std::endl;
}

// 删除data这个数值
void KIntArray::deleteData(int data)
{
    // 定义一个变量count，用来记录m_array中等于data的元素个数
    int count = 0;
    // 使用循环遍历m_array中的每个元素
    for (int i = 0; i < m_len; i++)
    {
        // 如果m_array[i]等于data
        if (m_array[i] == data)
        {
            // 将count加一
            count++;
        }
        // 否则
        else
        {
            // 将m_array[i]向前移动count个位置
            m_array[i - count] = m_array[i];
        }
    }
    // 将m_len减去count，表示删除了count个元素
    m_len -= count;
}
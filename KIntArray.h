#pragma once
#include<iostream>
using namespace std;
// KIntArray�࣬��������Ҫ��
class KIntArray
{
public:
    // ʹ�ó���Ϊn��int�����ʼ���࣬��ַ����m_array,���ȸ���m_len
    KIntArray(int n);

        // �ͷ�����ռ�
    ~KIntArray();


        // �ӱ�׼�����ȡm_len����ֵ���洢��m_array��
    void inputArray();

        // �������
    void outputArray();


        // ɾ��data�����ֵ
    void deleteData(int data);

private:
    int* m_array;
    int m_len;
};
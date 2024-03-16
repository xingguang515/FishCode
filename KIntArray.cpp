#include"KIntArray.h"

// ʹ�ó���Ϊn��int�����ʼ���࣬��ַ����m_array,���ȸ���m_len
KIntArray::KIntArray(int n)
{
    // Ϊm_array����n��int�Ŀռ�
    m_array = new int[n];
    // ��m_len��ֵΪn
    m_len = n;
}

// �ͷ�����ռ�
KIntArray::~KIntArray()
{
    // �ͷ�m_arrayָ����ڴ�
    if (m_array != nullptr) {
        delete[] m_array;
    }
    cout << "������������" << endl;
}

// �ӱ�׼�����ȡm_len����ֵ���洢��m_array��
void KIntArray::inputArray()
{
    // ʹ��ѭ���ӱ�׼�����ȡm_len����ֵ
    for (int i = 0; i < m_len; i++)
    {
        // ��ȡһ����ֵ���洢��m_array[i]��
        std::cin >> m_array[i];
    }
}

// �������
void KIntArray::outputArray()
{
    // ʹ��ѭ�����m_array�е�ÿ��Ԫ�أ��ÿո����
    for (int i = 0; i < m_len; i++)
    {
        // ���m_array[i]��һ���ո�
        std::cout << m_array[i] << " ";
    }
    // ���һ�����з�
    std::cout << std::endl;
}

// ɾ��data�����ֵ
void KIntArray::deleteData(int data)
{
    // ����һ������count��������¼m_array�е���data��Ԫ�ظ���
    int count = 0;
    // ʹ��ѭ������m_array�е�ÿ��Ԫ��
    for (int i = 0; i < m_len; i++)
    {
        // ���m_array[i]����data
        if (m_array[i] == data)
        {
            // ��count��һ
            count++;
        }
        // ����
        else
        {
            // ��m_array[i]��ǰ�ƶ�count��λ��
            m_array[i - count] = m_array[i];
        }
    }
    // ��m_len��ȥcount����ʾɾ����count��Ԫ��
    m_len -= count;
}
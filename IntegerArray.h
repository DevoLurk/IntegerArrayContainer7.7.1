#ifndef INTEGERARRAY
#define INTEGERARRAY

#include<iostream>
#include<random>
#include<stdlib.h>

class IntegerArray
{
private:
    int arrSize = 0;
    int* array = nullptr;

    const int maxNum = 2147483647;                  
    const int minNum = -2147483648;
    const int maxSize = 268435456;                        // 1 Gigabite 

    int random(int min, int max);                         // ��������� �������� � ���������
    void erase();                                         // ������� ���
    void reallocate(int size);                            // ����� ������ ��� ���������� ���������

public:
    IntegerArray();                                 
    IntegerArray(int length);                             // �������� ������� �������� ������ 
    IntegerArray(const IntegerArray& arr);                // ����������� �������
    ~IntegerArray();

    void setSize(int size);                                // �������� ������ ���������� �� �������� � ����������� ���������
    void insertInto(int index, long long num);             // �������� ����� ������� �� �������� ������� 
    void deleteFrom(int index);                            // ������� ������� �� �������
    void insertAtBeginning(long long num);                 // �������� ������� � ������
    void insertAtEnd(long long num);                       // �������� ������� � �����
    void randomFill(int min = -10000, int max = 10000);    // ���������� ���������� ���������� � ���������
    void print(int num = 10);                              // ������ . ������� ������ ������ 25 ��������
    int getElement(int index);                             // ���������� ������� �� �������
    int getLength();                                       // ���������� ������ �������
    bool getIndexOf(long long num, int &index);            // ���������� ������ �������� �������� ��� false

    IntegerArray& operator=(const IntegerArray& arr);
};

#endif // INTEGERARRAY
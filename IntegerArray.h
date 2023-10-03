#ifndef INTEGERARRAY
#define INTEGERARRAY

#include<iostream>
#include<random>
#include<stdlib.h>
#include"myexception.h"

class IntegerArray
{
private:
    int arrSize = 0;
    int* array = nullptr;

    const int maxNum = 2147483647;                  
    const int minNum = -2147483648;
    const int maxSize = 268435456;                        // 1 Gigabite 

    int random(int min, int max);                         // случайное значение в диапазоне
    void erase();                                         // стирает все
    void reallocate(int size);                            // новый размер без сохранения элементов

public:
    IntegerArray();                                 
    IntegerArray(int length);                             // создание массива заданной длинны 
    IntegerArray(const IntegerArray& arr);                // копирование массива
    ~IntegerArray();

    void setSize(int size);                                // изменить размер контейнера на заданный с сохранением элементов
    void insertInto(int index, long long num);             // добавить новый элемент на заданную позицию 
    void deleteFrom(int index);                            // удалить элемент по индексу
    void insertAtBeginning(long long num);                 // вставить элемент в начало
    void insertAtEnd(long long num);                       // вставить элемент в конец
    void randomFill(int min = -100000, int max = 100000);  // заполнение случайными значениями в диапазоне
    void print(int num = 10);                              // печать . перенос строки каждые 25 символов
    int getElement(int index);                             // возвращает элемент по индексу
    int getLength() const;                                 // возвращает длинну массива
    bool getIndexOf(long long num, int &index);            // возвращает индекс искомого элемента или false

    IntegerArray& operator=(const IntegerArray& arr);
    int& operator[](int index);
};

#endif // INTEGERARRAY
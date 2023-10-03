#include<iostream>
#include"IntegerArray.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");

	int size = 300000000;

	printf("\t \033[33mДемонстрация контейнера элементров тиа int \033[0m\n\n");
	printf("    Пробуем создать массив на %d элементов \n", size);

	try
	{
        IntegerArray Arr(size);
	}
	catch(int a)
	{
		
	}
	
	size = 20;

	printf("\n    А теперь создадим массив на %d элементов\n", size);
	printf("    Заполним его случайными числами в диапазоне -10000 10000  \n");
	printf("    и распечатаем на экран  \n");

	IntegerArray Arr(size);
    Arr.randomFill();
	Arr.print();

	printf("\n    Добавим число 55 в начало, число 874 в конец и распечатаем снова  \n");

	Arr.insertAtBeginning(55);
	Arr.insertAtEnd(874);
	Arr.print();
	


	printf("\nElemrnt[3] = %d \n", Arr.getElement(51));

	Arr.setSize(7);

	Arr.print();


	return 0;
}
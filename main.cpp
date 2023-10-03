#include<iostream>
#include <exception>
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
	catch(exception& e)
	{
		printf("\033[31m %s \033[0m \n", e.what());
	}
	
	size = 20;

	printf("\n    А теперь создадим массив на %d элементов\n", size);
	printf("    Заполним его случайными числами в диапазоне -100000 100000\n");
	printf("    и распечатаем на экран  \n");

    IntegerArray Arr(size);

	try
	{
        Arr.randomFill();
	}
	catch (exception& e)
	{
		printf("\033[31m %s \033[0m \n", e.what());
	}

	Arr.print();

	printf("\n    Добавим число 55 в начало, число 874 в конец и распечатаем снова\n");

	try
	{
        Arr.insertAtBeginning(55);
	    Arr.insertAtEnd(874);
	}
	catch (exception& e)
	{
		printf("\033[31m %s \033[0m \n", e.what());
	}

	Arr.print();

	size = Arr.getLength();

	printf("\n    Попробуем получить доступ к %d элементу массива и вывести его на экран\n", Arr.getLength());
	printf("    Помним, что мы добавили 2 элемента к массиву у его размер теперь %d\n", Arr.getLength());

	try
	{
        printf("\nElemrnt[%d] = %d \n", size,  Arr.getElement(size));
	}
	catch (exception& e)
	{
		printf("\033[31m %s \033[0m \n", e.what());
	}

	printf("\n    Получаем ошибку изза того, что %d индекс несуществует (нумерация идет с нуля)\n", size);
	printf("    Получим значение последнего (size-1) элемента массива и выведем его на жкран\n");

	try
	{
		printf("\n    Element[%d] = %d \n", (size-1), Arr.getElement(size-1));
	}
	catch (exception& e)
	{
		printf("\033[31m %s \033[0m \n", e.what());
	}

	printf("\n    Меняем размер нашего массива с %d элементов до 7 и печатаем на экран\n", size);

	try
	{
        Arr.setSize(7);
		Arr.print();
	}
	catch (exception& e)
	{
		printf("\033[31m %s \033[0m \n", e.what());
	}

	printf("\n    Удалим элементы по индексу 4 пять раз и распечатаем массив\n");

	try
	{
		for (int i = 0; i < 5; i++)
			Arr.deleteFrom(4);
		
	}
	catch (exception& e)
	{
		printf("\033[31m %s \033[0m \n", e.what());
	}

    Arr.print();
	
	printf("\n    Сначала всё было хорошо, но потом элементы по индексу 4 закончились\n");
	printf("    длинна масиива стала равна 3 и мы стали обращать к элементу масиива за его пределами\n");


	printf("\n\n    А теперь добавим элемент 78 на позицию с индексом 2\n");
	printf("    и распечатаем что у нас получилось\n");

	try
	{
		Arr.insertInto(2, 78);

	}
	catch (exception& e)
	{
		printf("\033[31m %s \033[0m \n", e.what());
	}
	
	Arr.print();

	Arr.setSize(10000000);
	Arr.randomFill();

	printf("\n    Увеличим размер нашего массива до 10 миллионов элементов\n");
	printf("    и перегенерируем слачайные числа в нем\n");
	printf("    давайте попробуем найти число 5, индекс первый встречи\n");
	printf("    у меня нашло на 150к позиции и поиск длился 2 минуты, удачи с поиском))))\n");

	try
	{
		int index;

		if (Arr.getIndexOf(5, index))
			printf("\n    Число 5 первый раз встречается на позиции %d\n", index);
		else
			printf("\n    Число не было найдено\n");
	}
	catch (exception& e)
	{
		printf("\033[31m %s \033[0m \n", e.what());
	}

	printf("\n    Интересно, а какое число у нас по индексу 10 миллиов, давайте узнаем\n");

	try
	{
			printf("\n    Число по индексу 10000000 = %d", Arr.getElement(10000000));
	}
	catch (exception& e)
	{
		printf("\033[31m %s \033[0m \n", e.what());
	}

	printf("\n    Ой, это размер массива 10 миллионов, а индекса такого нет\n");
	printf("\n    Ладно, сейчас покажу последнее число\n");

	try
	{
		printf("\n    Число по индексу 9999999 = %d\n\n\n", Arr.getElement(10000000 - 1));
	}
	catch (exception& e)
	{
		printf("\033[31m %s \033[0m \n", e.what());
	}

	system("PAUSE");

	return 0;
}
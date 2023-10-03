#include<iostream>
#include <exception>
#include"IntegerArray.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int size = 300000000;

	printf("\t \033[33m������������ ���������� ���������� ��� int \033[0m\n\n");
	printf("    ������� ������� ������ �� %d ��������� \n", size);

	try
	{
        IntegerArray Arr(size);
	}
	catch(exception& e)
	{
		printf("\033[31m %s \033[0m \n", e.what());
	}
	
	size = 20;

	printf("\n    � ������ �������� ������ �� %d ���������\n", size);
	printf("    �������� ��� ���������� ������� � ��������� -100000 100000\n");
	printf("    � ����������� �� �����  \n");

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

	printf("\n    ������� ����� 55 � ������, ����� 874 � ����� � ����������� �����\n");

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

	printf("\n    ��������� �������� ������ � %d �������� ������� � ������� ��� �� �����\n", Arr.getLength());
	printf("    ������, ��� �� �������� 2 �������� � ������� � ��� ������ ������ %d\n", Arr.getLength());

	try
	{
        printf("\nElemrnt[%d] = %d \n", size,  Arr.getElement(size));
	}
	catch (exception& e)
	{
		printf("\033[31m %s \033[0m \n", e.what());
	}

	printf("\n    �������� ������ ���� ����, ��� %d ������ ������������ (��������� ���� � ����)\n", size);
	printf("    ������� �������� ���������� (size-1) �������� ������� � ������� ��� �� �����\n");

	try
	{
		printf("\n    Element[%d] = %d \n", (size-1), Arr.getElement(size-1));
	}
	catch (exception& e)
	{
		printf("\033[31m %s \033[0m \n", e.what());
	}

	printf("\n    ������ ������ ������ ������� � %d ��������� �� 7 � �������� �� �����\n", size);

	try
	{
        Arr.setSize(7);
		Arr.print();
	}
	catch (exception& e)
	{
		printf("\033[31m %s \033[0m \n", e.what());
	}

	printf("\n    ������ �������� �� ������� 4 ���� ��� � ����������� ������\n");

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
	
	printf("\n    ������� �� ���� ������, �� ����� �������� �� ������� 4 �����������\n");
	printf("    ������ ������� ����� ����� 3 � �� ����� �������� � �������� ������� �� ��� ���������\n");


	printf("\n\n    � ������ ������� ������� 78 �� ������� � �������� 2\n");
	printf("    � ����������� ��� � ��� ����������\n");

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

	printf("\n    �������� ������ ������ ������� �� 10 ��������� ���������\n");
	printf("    � �������������� ��������� ����� � ���\n");
	printf("    ������� ��������� ����� ����� 5, ������ ������ �������\n");
	printf("    � ���� ����� �� 150� ������� � ����� ������ 2 ������, ����� � �������))))\n");

	try
	{
		int index;

		if (Arr.getIndexOf(5, index))
			printf("\n    ����� 5 ������ ��� ����������� �� ������� %d\n", index);
		else
			printf("\n    ����� �� ���� �������\n");
	}
	catch (exception& e)
	{
		printf("\033[31m %s \033[0m \n", e.what());
	}

	printf("\n    ���������, � ����� ����� � ��� �� ������� 10 �������, ������� ������\n");

	try
	{
			printf("\n    ����� �� ������� 10000000 = %d", Arr.getElement(10000000));
	}
	catch (exception& e)
	{
		printf("\033[31m %s \033[0m \n", e.what());
	}

	printf("\n    ��, ��� ������ ������� 10 ���������, � ������� ������ ���\n");
	printf("\n    �����, ������ ������ ��������� �����\n");

	try
	{
		printf("\n    ����� �� ������� 9999999 = %d\n\n\n", Arr.getElement(10000000 - 1));
	}
	catch (exception& e)
	{
		printf("\033[31m %s \033[0m \n", e.what());
	}

	system("PAUSE");

	return 0;
}
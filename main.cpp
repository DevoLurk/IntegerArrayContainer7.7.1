#include<iostream>
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
	catch(int a)
	{
		
	}
	
	size = 20;

	printf("\n    � ������ �������� ������ �� %d ���������\n", size);
	printf("    �������� ��� ���������� ������� � ��������� -10000 10000  \n");
	printf("    � ����������� �� �����  \n");

	IntegerArray Arr(size);
    Arr.randomFill();
	Arr.print();

	printf("\n    ������� ����� 55 � ������, ����� 874 � ����� � ����������� �����  \n");

	Arr.insertAtBeginning(55);
	Arr.insertAtEnd(874);
	Arr.print();
	


	printf("\nElemrnt[3] = %d \n", Arr.getElement(51));

	Arr.setSize(7);

	Arr.print();


	return 0;
}
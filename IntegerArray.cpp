#include "IntegerArray.h"

IntegerArray::IntegerArray() = default;

IntegerArray::IntegerArray(int length)
{
	if (length > maxSize)
		return; // EX

	arrSize = length;
	array = new int[length];
}

IntegerArray::IntegerArray(const IntegerArray& arr)
{
	//reallocate(arr.);

	for (int i = 0; i < arrSize; i++)
		array[i] = arr.array[i];
}

IntegerArray::~IntegerArray()
{
	delete[] array;
}

void IntegerArray::setSize(int size)
{
	if (size == arrSize)
		return;

	if (size > maxSize)
		return; // EX

	if (size < 0)
		return; // EX

	if (size == 0)
		erase();
	else
		if (arrSize > 0)
		{
			int* arrCopy = new int[size];
			int elementsToCopy{ (size > arrSize) ? arrSize : size };

			for (int i = 0; i < elementsToCopy; i++)
				arrCopy[i] = array[i];

			delete[] array;

			array = arrCopy;
			arrSize = size;
		}
}

void IntegerArray::insertInto(int index, long long num)
{
	if ((index <= 0) && (index > arrSize))
		return; // EX

	if (arrSize + 1 == maxSize)
		return; // EX

	if ((num < minNum) || (num > maxNum))
		return; // EX

	int* arrCopy = new int[arrSize + 1];

	for (int i = 0; i < index; i++)
		arrCopy[i] = array[i];

	arrCopy[index] = num;

	for (int i = index; i < arrSize; i++)
		arrCopy[i + 1] = array[i];

	delete[] array;
	array = arrCopy;
	arrSize++;
}

void IntegerArray::deleteFrom(int index)
{
	if ((index <= 0) && (index < arrSize))
		return; // EX

	if (arrSize == 1)
	{
		setSize(0);
		return;
	}

	int* arrCopy =  new int[arrSize - 1];

	for (int i =  0; i < index; i++)
		arrCopy[i] = array[i];

	for (int i = index + 1; i < arrSize; i++)
		arrCopy[i - 1] = array[i];

	delete[] array;
	array = arrCopy;
	arrSize--;
}

void IntegerArray::insertAtBeginning(long long num)
{
	if ((num < minNum) || (num > maxNum))
		return; // EX

	IntegerArray::insertInto(0, num);
}

void IntegerArray::insertAtEnd(long long num)
{
	if ((num < minNum) || (num > maxNum))
		return; // EX

	IntegerArray::insertInto(arrSize, num);
}

void IntegerArray::randomFill(int min, int max)
{
	if ((min < minNum) || (min > maxNum))
		return; // EX

	if ((max < minNum) || (max > maxNum))
		return; // EX

	for (int i = 0; i < arrSize; i++)
		array[i] = random(min, max);
}

void IntegerArray::print(int num)
{
	for (int i = 0; i < arrSize; i++)
	{
		if (i % num == 0)
			printf("\n");

		printf(" %8d, ", array[i]);
	}

	printf("\b\b \n");
}

int IntegerArray::getElement(int index)
{
	if (!arrSize)
		return 2;    // EX

	if (index >= arrSize)
		return 1;    // EX

    return array[index];
}

bool IntegerArray::getIndexOf(long long num, int &index)
{
	if ((num < minNum) || (num > maxNum))
		return false; // EX

	bool flag = false;

	for (int i = 0; i < arrSize; i++)
		if (array[i] == num)
		{
			index = i;
			flag = true;

			break;
		}

	return flag;
}

int IntegerArray::getLength()
{
	return arrSize;
}

int IntegerArray::random(int min, int max)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dist(min, max);

	return dist(gen);
}

IntegerArray& IntegerArray::operator=(const IntegerArray& arr)
{
	if (&arr == this)
		return *this;

	//////////////////////reallocate();

	for (int i = 0; i < arrSize; i++)
		array[i] = arr.array[i];

	return *this;
}

void IntegerArray::erase()
{
	arrSize = 0;
	array = nullptr;
}

void IntegerArray::reallocate(int size)
{
	erase();

	if (size <= 0)
		return;

	array = (int*)malloc(sizeof(int) * size);
	arrSize = size;
}












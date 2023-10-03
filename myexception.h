#ifndef MYEXCEPTION
#define MYEXCEPTION

#include <exception>

class bad_range : public std::exception                       // ����� �� ������� �������
{
public:
	virtual const char* what() const noexcept override
	{
		return "ERROR: Out of rande!";
	}
};

class bad_length : public std::exception                      // ������������ ������ �������
{
public:
	virtual const char* what() const noexcept override
	{
		return "ERROR: Out of lenght! Acceptable range of values 0 to 268435456";
	}
};

class bad_num : public std::exception                          // ����� �� ������� �������� ���� int
{
public:
	virtual const char* what() const noexcept override
	{
		return "ERROR: Out of rande! Acceptable range of values -2147483648 to 2147483647";
	}
};

#endif // MYEXCEPTION
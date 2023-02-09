#include <iostream>
#include <exception>
#include "IntegerArray.h"

int main()
{
	setlocale(LC_ALL, "");
	
	try
	{
		// ��������� ������ �� -10 ���������
		IntegerArray array(-10);
	}
	catch (std::exception& exceptionBadLength)
	{
		std::cout << "������ array(-10):\t" << exceptionBadLength.what() << "\n\n" << std::endl;
	}

	// ��������� ������ �� 10 ���������
	IntegerArray array(10);

	// ��������� ������ ������� �� 1 �� 10
	for (int i{ 0 }; i < 10; ++i)
		array[i] = i + 1;

	try
	{
		std::cout << array[13] << std::endl;
	}
	catch (std::exception& exceptionBadLength)
	{
		std::cout << "������� ������� array[13]: " << exceptionBadLength.what() << "\n\n" << std::endl;
	}
		
	try
	{
		// ��������� ����� 7 ����� ��������� � �������� 15
		array.insertBefore(7, 15);
	}
	catch (std::exception& exceptionBadLength)
	{
		std::cout << "������� ������� array[15]: " << exceptionBadLength.what() << "\n\n" << std::endl;
	}

	try
	{
		// ������� ������� � �������� 19
		array.remove(19);
	}
	catch (std::exception& exceptionBadLength)
	{
		std::cout << "������� ������� array[19]: " << exceptionBadLength.what() << "\n\n" << std::endl;
	}
	
	// �������� ������ ������� �� 8 ���������
	array.resize(8);

	// ��������� 30 � 40 � ����� � ������ �������
	array.insertAtEnd(30);
	array.insertAtBeginning(40);

	// ��������� ������, ����� ���������, ��� ����������� ���������/���������, ������ �� ������
	{
		IntegerArray b{ array };
		b = array;
		b = b;
		array = array;
	}

	// ����� ���� ��������� �������
	for (int i{ 0 }; i < array.getLength(); ++i)
		std::cout << array[i] << ' ';

	std::cout << '\n';

	return 0;
}
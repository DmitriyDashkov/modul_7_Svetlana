#pragma once
#include <iostream>

// ���������� ��� ������������ ����� �������
class Bad_length : public std::exception
{
public:
	virtual const char* what() const noexcept override;	
};
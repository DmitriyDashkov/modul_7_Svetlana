#pragma once
#include <iostream>

// ���������� ��� ������ �� ������� �������
class Bad_range : public std::exception
{
public:
	virtual const char* what() const noexcept override;	
};
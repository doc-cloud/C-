#include <iostream>
#include "array.h"

using namespace std;

Array::Array(int len)
{
	if (len < 0)
		len = 0;
	m_len = len;
	m_space = new int[m_len];
}

Array::Array(const Array & obj)
{
	this->m_len = obj.m_len;
	this->m_space = new int[obj.m_len];
	for (int i = 0; i < m_len; i++)
		this->m_space[i] = obj.m_space[i];
}

Array::~Array()
{
	if (m_space != NULL) {
		delete [] m_space;
		m_space = NULL;
		m_len = 0;
	}
}

void Array::setData(int index, int value)
{
	m_space[index] = value;
}

int Array::getData(int index)
{
	return m_space[index];
}

int Array::length()
{
	return m_len;
}

int & Array::operator [] (int i)
{
	return m_space[i];
}

Array & Array::operator = (Array & obj)
{
	if (this->m_space != NULL) {
		delete [] m_space;
		m_len = 0;
	}
	m_len = obj.m_len;
	m_space = new int[m_len];
	for (int i = 0; i < m_len; i++)
		m_space[i] = obj[i];
		//m_space[i] = obj.m_space[i];
	return *this;
}

bool Array::operator == (Array &obj)
{
	for (int i = 0; i < m_len; i++)
		if (m_space[i] != obj[i])
			return false;
	return true;
}

bool Array::operator != (Array &obj)
{
	return !(*this == obj);
	//return (*this != obj);
}

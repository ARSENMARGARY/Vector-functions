#include <iostream>
#include "class_prototype.h"
using namespace std;

Vector::Vector()
{
    m_capacity = 5;
    m_size = 0;
    m_buffer = new int[m_capacity];
}

void Vector::push_back(int elem)
{
    if(m_size == m_capacity)
    {
        m_capacity *= 2;
        int* tmp = new int[m_capacity];

        for(int i = 0; i < m_size; ++i)
        {
            tmp[i] = m_buffer[i];
        }

        delete[] m_buffer;
        m_buffer = tmp;
    }
    m_buffer[m_size] = elem;
    m_size++;
}

int Vector::at(int index)
{
    if((index < m_size) && (index >= 0))
    {
        return m_buffer[index];
    }
    else{
        cout << "There is not element" << endl;
    }
}

bool Vector::empty_vector()
{
    if(m_size > 0)
    {
        return false;
    }
    return true;
}

void Vector::insert(int element,int index)
{
    if(index < m_size)
    {
        m_buffer[index] = element;
    }
}

void Vector::erase(int index)
{
    if( (index < m_size) && (index >= 0))
    {
        int* tmp = new int[m_capacity];

        for(int i = 0; i < m_size; ++i)
        {   
            if(i == index)
            {
                continue;
            }

            if(i > index)
            {
                tmp[i-1] = m_buffer[i];
            }

            tmp[i] = m_buffer[i];
        }

        delete[] m_buffer;
        m_buffer = tmp;
    }

     --m_size;
 }

void Vector::resize(int new_size)
{
    if(new_size >=  0)
    {
        m_size = new_size;
    }
}

void Vector::clear()
{
    m_size = 0;
}

int Vector::size()
{
    if((m_size >= 0) && (m_size <= m_capacity))
    {
        return m_size;
    }   
}

int Vector::capacity()
{
    if((m_capacity >= 0))
    {
        return m_capacity;
    }   
}

int* Vector::data()
{
    if(m_size > 0)
    {
        int* tmp = new int[m_size];
        for(int i = 0; i < m_size; ++i)
        {
            tmp[i] = m_buffer[i];
        }
    return tmp;
    }
}

void Vector::shrink_to_fit()
{
    m_capacity = m_size;
}

Vector::~Vector()
{
    delete[] m_buffer;
}
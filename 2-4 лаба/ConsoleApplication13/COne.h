// COne.h
#ifndef CONE_H
#define CONE_H

#include <iostream>
#include <cstring>

class COne {
private:
    float f;
    char* ps;

public:
    // ����������� �� ���������
    COne();

    // ����������� � �����������
    COne(float fValue, const char* psValue);

    // ����������� �����������
    COne(const COne& other);

    // ����������
    ~COne();

    // ������������� �������� ������������
    COne& operator=(const COne& other);

    // ������ �������
    float getF() const;
    const char* getPs() const;
    void setF(float fValue);
    void setPs(const char* psValue);

    // ����� print()
    void print() const;
};

#endif // CONE_H

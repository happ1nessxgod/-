// CTwo.h
#ifndef CTWO_H
#define CTWO_H

#include <iostream>
#include <string>
#include "COne.h"

class CTwo {
protected:
    std::string s;
    COne obj;

public:
    // ����������� �� ���������
    CTwo();

    // ����������� � �����������
    CTwo(const std::string& sValue, const COne& objValue);

    // ����������� �����������
    CTwo(const CTwo& other);

    // ����������
    virtual ~CTwo();

    // ������������� �������� ������������
    CTwo& operator=(const CTwo& other);

    // ������ �������
    std::string getS() const;
    COne getObj() const;
    void setS(const std::string& sValue);
    void setObj(const COne& objValue);

    // ����������� ����� print()
    virtual void print() const;
};

#endif // CTWO_H

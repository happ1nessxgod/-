// CTwo.cpp
#include "CTwo.h"

// ����������� �� ���������
CTwo::CTwo() : s(""), obj() {}

// ����������� � �����������
CTwo::CTwo(const std::string& sValue, const COne& objValue) : s(sValue), obj(objValue) {}

// ����������� �����������
CTwo::CTwo(const CTwo& other) : s(other.s), obj(other.obj) {}

// ����������
CTwo::~CTwo() {}

// ������������� �������� ������������
CTwo& CTwo::operator=(const CTwo& other) {
    if (this != &other) {
        s = other.s;
        obj = other.obj;
    }
    return *this;
}

// ������ �������
std::string CTwo::getS() const {
    return s;
}

COne CTwo::getObj() const {
    return obj;
}

void CTwo::setS(const std::string& sValue) {
    s = sValue;
}

void CTwo::setObj(const COne& objValue) {
    obj = objValue;
}

// ����������� ����� print()
void CTwo::print() const {
    std::cout << "CTwo: s = " << s << std::endl;
    obj.print();
}

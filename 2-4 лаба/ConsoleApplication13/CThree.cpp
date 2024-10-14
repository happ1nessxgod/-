// CThree.cpp
#include "CThree.h"

// ����������� �� ���������
CThree::CThree() : CTwo(), k(0) {}

// ����������� � �����������
CThree::CThree(const std::string& sValue, const COne& objValue, int kValue) : CTwo(sValue, objValue), k(kValue) {}

// ����������� �����������
CThree::CThree(const CThree& other) : CTwo(other), k(other.k) {}

// ����������
CThree::~CThree() {}

// ������������� �������� ������������
CThree& CThree::operator=(const CThree& other) {
    if (this != &other) {
        CTwo::operator=(other);
        k = other.k;
    }
    return *this;
}

// ������ �������
int CThree::getK() const {
    return k;
}

void CThree::setK(int kValue) {
    k = kValue;
}

// ����������� ����� print()
void CThree::print() const {
    std::cout << "CThree: k = " << k << std::endl;
    CTwo::print();
}

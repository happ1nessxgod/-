// CFour.cpp
#include "CFour.h"

// ����������� �� ���������
CFour::CFour() : CThree(), d(0.0) {}

// ����������� � �����������
CFour::CFour(const std::string& sValue, const COne& objValue, int kValue, double dValue)
    : CThree(sValue, objValue, kValue), d(dValue) {}

// ����������� �����������
CFour::CFour(const CFour& other) : CThree(other), d(other.d) {}

// ����������
CFour::~CFour() {}

// ������������� �������� ������������
CFour& CFour::operator=(const CFour& other) {
    if (this != &other) {
        CThree::operator=(other);
        d = other.d;
    }
    return *this;
}

// ������ �������
double CFour::getD() const {
    return d;
}

void CFour::setD(double dValue) {
    d = dValue;
}

// ����������� ����� print()
void CFour::print() const {
    std::cout << "CFour: d = " << d << std::endl;
    CThree::print();
}

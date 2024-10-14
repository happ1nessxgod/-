// CFour.h
#ifndef CFOUR_H
#define CFOUR_H

#include "CThree.h"

class CFour : public CThree {
private:
    double d;

public:
    // ����������� �� ���������
    CFour();

    // ����������� � �����������
    CFour(const std::string& sValue, const COne& objValue, int kValue, double dValue);

    // ����������� �����������
    CFour(const CFour& other);

    // ����������
    ~CFour();

    // ������������� �������� ������������
    CFour& operator=(const CFour& other);

    // ������ �������
    double getD() const;
    void setD(double dValue);

    // ����������� ����� print()
    virtual void print() const override;
};

#endif // CFOUR_H

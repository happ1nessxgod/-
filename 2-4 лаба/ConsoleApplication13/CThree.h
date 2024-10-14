// CThree.h
#ifndef CTHREE_H
#define CTHREE_H

#include "CTwo.h"

class CThree : public CTwo {
private:
    int k;

public:
    // ����������� �� ���������
    CThree();

    // ����������� � �����������
    CThree(const std::string& sValue, const COne& objValue, int kValue);

    // ����������� �����������
    CThree(const CThree& other);

    // ����������
    ~CThree();

    // ������������� �������� ������������
    CThree& operator=(const CThree& other);

    // ������ �������
    int getK() const;
    void setK(int kValue);

    // ����������� ����� print()
    virtual void print() const override;
};

#endif // CTHREE_H

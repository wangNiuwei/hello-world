#include <iostream>
#include <string>
using namespace std;

//基类
class BaseA{
public:
    void funcA();
public:
    int m_a;
};
void BaseA::funcA(){ cout<<"BaseA"<<endl; }

//基类
class BaseB{
public:
    void funcB();
public:
    int m_b;
};
void BaseB::funcB(){ cout<<"BaseB"<<endl; }

//派生类
class DerivedC: public BaseA,public BaseB{
public:
    void funcC();
    void varcall();
public:
    int m_c;
};
void DerivedC::funcC(){ cout<<"DerivedC"<<endl; }
void DerivedC::varcall(){cout<<m_a<<"+"<<m_b<<"="<<m_c<<endl; }

int main(){
    DerivedC C;
    C.m_a=1;
    C.m_b=2;
    C.m_c=3;
    C.varcall();
    C.funcA();
    C.funcB();
    C.funcC();

    return 0;
}


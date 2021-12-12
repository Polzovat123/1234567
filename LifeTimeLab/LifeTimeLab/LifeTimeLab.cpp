#include <iostream>


class SomeA {
public:
    SomeA() {
        printf("A create\n");
    }
    virtual void show() {
        printf("SomA is show.\n");
    }
    virtual void show2() {
        printf("show in some2\n");
    }
    void print() {
        printf("a\n");
    }
    ~SomeA() {
        printf("A killed\n");
    }
};
class SomeB : public SomeA {
public:
    void show() override {
        printf("SomB is show().\n");
    }
    void print() {
        SomeA::print();
        printf("b\n");
    }
};
class SomeC : public SomeA {
public:
    void show2() override {
        printf("show someC2\n");
    }
};
/*
int main()
{
    {
        SomeA par = SomeA();
        par.show();
        par.show2();
    }
    {
        SomeB p = SomeB();
        p.show();
        p.show2();
    }
    printf("\n\n");
    {
        SomeA* a = new SomeB();
        a->show();
        a->print();
        a->show2();
        delete a;
    }
    return 0;
}
*/
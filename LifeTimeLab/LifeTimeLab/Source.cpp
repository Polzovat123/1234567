#include <iostream>

using namespace std;

class Object
{
public:
    Object() { cout << "Object create" << endl; }
    ~Object() { cout << "Object delete" << endl; }
};

class Animal
{
public:
    Animal() { cout << "Aniamal create" << endl; }

    virtual ~Animal() { cout << "Animal is delete" << endl; }

    virtual void print() = 0;
};

class Human : public Animal
{
public:
    Human() { cout << "Human born" << endl; }
    ~Human() { cout << "Human die" << endl; }
    void print() {}
    Object  obj;
};
/*
int main()
{
    Animal* p = new Human();
    delete p;
    return 0;
}
*/
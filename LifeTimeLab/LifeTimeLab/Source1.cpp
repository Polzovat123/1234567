#include <iostream>
#include <string>

using namespace std;

class Message {
private:
	int x, y;
public:
	void draw() {}
};

class A {
public:
	A(){}
	virtual string getType() {
		return "A";
	}
	virtual bool isA(string type) {
		if (type == "A")return true;
		else false;
	}
};
class B:public A {
public:
	B(){}
	string getType() {
		return "B";
	}
	void draw() {
		cout << "|-<>-|" << endl;
	}
	bool isA(string type) {
		if (type == "B")return true;
		return A::isA(type);
	}
};
class C :public A {
public:
	C(){}
	string getType() {
		return "C";
	}
	bool isA(string type) {
		if (type == "C")return true;
		return A::isA(type);
	}
	void fly() {
		printf("weeeeeee...\n");
		printf("\n\n");
	}
};
/*
int main() {
	A* a[3] = {new A(), new B(), new C()};
	for (int i = 0; i < 3; i++) {
		if (a[i]->getType()=="B") {
			((B*)(a[i]))->draw();
		}
		if (dynamic_cast<C*>(a[i])!=nullptr) {
			dynamic_cast<C*>(a[i])->fly();
		}
	}
}
*/
#include <iostream>

using namespace std;

class Base{
public:
	Base(){
		printf("Call constructor empty\n");
	}
	Base(Base *obj) {
		printf("Call constructor pointer\n");
	}
	Base(Base &obj) {
		printf("Call constructor linker\n");
	}
	~Base() {
		printf("object delete.\n");
	}
};

void func1(Base obj) {
	printf("Create copy object Base and use for function\n");
}
void func2(Base *obj) {
	printf("We get pointer on object.\n");
}
void func3(Base& obj) {
	printf("We get link on object.\n");
}

Base func1() {
	printf("I return a object\n");
	Base a;
	return a;
}
Base* func2() {
	printf(" We return base pointer.\n");
	return new Base();
}
Base& func3() {
	printf("I return an object.\n");
	Base a;
	return a;
}

int main() {
	Base a;
	Base* f = new Base();
	Base b(f);
	Base c(*f);
	printf("\n");
	func1(a);
	func2(f);
	func3(*f);
	printf("\n");
	func2();
	func3();
	printf("\n");
	delete f;
	return 0;
}

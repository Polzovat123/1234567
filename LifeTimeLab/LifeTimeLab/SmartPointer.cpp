#include <iostream>
#include <string>
#include <memory>

using namespace std;

class Thing {
public:
	Thing() {
		printf("thing create.\n");
	}
	~Thing() {
		printf("thing delete.\n");
	}
};
/*
int main() {
	//problem1
	{
		Thing* a = new Thing();
		Thing* b = a;
		delete a;
		//delete b;
		//we delete first object, and second pointer will give empty part of memory
	}
	//fixed use unqie_ptr, but i read that we can use auto ptr but how write they very similar
	{
		unique_ptr<Thing> p1(new Thing());
		//unique_ptr<Thing> p2(p1);//ve can do it
		//but we can
		unique_ptr<Thing> p3;
		p3 = move(p1);
		//or
		p3.swap(p1);
	}
	{
		shared_ptr<Thing> p1(new Thing());
		shared_ptr<Thing> p2(p1);
		printf("Now we will delete\n");
	}
	return 0;
}
*/
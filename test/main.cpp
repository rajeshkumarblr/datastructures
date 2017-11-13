#include <iostream>
using namespace std;

class A
{
	public:
		A() {}
		virtual ~A(){
					cout << "base class destructor" << endl;
		}
};

class B: public A
{
	public:
		B():A(){}
		
	~B(){
		cout << "derived class destructor" << endl;
	}
};

int main(void)
{
  A* a = new B();
  delete a;
  getchar();
}

#include <iostream>
#include <string>

using namespace std;
class PIZZA{

private:
	string m_name;
	string m_bread;
	string m_meat;
public:

	PIZZA(string name="PIZZA", string bread="bread", string meat="meat");
	//void create();
	void bake();
	void cut();
	void box();


};

class NewYorkPizza: public PIZZA
{
public:
	NewYorkPizza(string name="NewYorkPizza", string bread="NewYorkbread", string meat="NewYorkmeat");
};

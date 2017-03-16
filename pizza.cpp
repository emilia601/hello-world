#include "pizza.h"
PIZZA::PIZZA(string name, string bread, string meat)	  
{
	m_name = name;
	m_bread = bread;
	m_meat = meat;
	cout<<m_name<<" is created: "<<"bread is "<<m_bread<<" meat is "<<m_meat<<endl;
}

	  void PIZZA::bake()
	  {
		cout<<m_name<<" is baking"<<endl;
	  }
	  void PIZZA::cut()
	  {
		cout<<m_name<<" is cutting"<<endl;
	  }

	  void PIZZA::box()
	  {
		cout<<m_name<<" is boxing"<<endl;
	  }

void main()
{
	PIZZA p1;
	p1.bake();
	p1.cut();
	p1.box();

}
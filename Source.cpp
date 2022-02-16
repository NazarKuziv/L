#include "Product.h"

int main()
{
	
	Product a;
	Read(a);
	cout << "Total caloric content of the product = " << a.Power(a) << " cal" << endl;


	cout << "Operator:" << endl;
	cout << "a++" << endl;
	a++;
	Display(a);
	cout << "++a" << endl;
	++a;
	Display(a);
	cout << "a--" << endl;
	a--;
	Display(a);
	cout << "--a" << endl;
	--a;
	Display(a);
	

}
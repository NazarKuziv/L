#include "Product.h"



void Read(Product& a)
{
	int k, i = 0;
	double m;
	do {
		cout << "Enter the caloric content of the product (100g): "; cin >> k;
		cout << "Enter the weight of the product (kg): "; cin >> m;
		if (k > 0 && m > 0)
		{
			i++;
			Product T(k, m);
			a = T;
		}
		else
			cout << "You entered incorrect data!" << endl;

	} while (i == 0);

}

double Product::Power(Product& a)
{
	return (a.second * 1000) / 100 * a.first;
}


Product::Product()
{
	first = 0;
	second = 0;
}

Product::Product(int f, double s)
{
	first = f;
	second = s;
}

Product::Product(const Product& a)
{
	first = a.first;
	second = a.second;
}

Product::~Product()
{
}

Product& Product::operator++()
{
	first++;
	return *this;
}

Product& Product::operator--()
{
	first--;
	return *this;
}
Product Product::operator ++(int)
{
	Product t(*this);
		second++;
	return t;
}
Product Product::operator --(int)
{
	Product t(*this);
	second--;
	return t;
}
void Display(Product a)
{
	cout << "the caloric content of the product (100g): " << a.first << " cal" << endl;
	cout << "the weight of the product (kg): "<< a.second <<" Kg"<<endl;
}

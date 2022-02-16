#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Product
{
private:
	int first;
	double second;

public:
	Product();
	Product(int f, double s);
	Product(const Product&);
	~Product();
	int getFirst() const { return first; }
	double getSecond() const { return second; }
	void SetFirst(int value) { first = value; };
	void SetSecond(double value) { second = value; };
	double Power(Product& a);
	friend void Display(Product a);
	friend void Read(Product& a);
	friend ostream& operator << (ostream&, const Product&);
	friend istream& operator >> (istream&, Product&);
	Product& operator++();
	Product& operator--();
	Product operator ++(int);
	Product operator --(int);
};


#include <iostream>
using namespace std;

class Car {
	char* model;
	char* country;
	char* colour;
	int year;
	double price;

public:
	Car();
	Car(const char* model, const char* country, const char* colour, int year, double price);
	void Print();
	~Car();


};



Car::Car()
{
	model = country = colour = nullptr;
	year = price = 0;
}

Car::Car(const char* a, const char* b, const char* c, int t, double r)
{
	model = new char[strlen(a) + 1];
	strcpy_s(model, strlen(a) + 1, a);

	country = new char[strlen(b) + 1];
	strcpy_s(country, strlen(b) + 1, b);

	colour = new char[strlen(c) + 1];
	strcpy_s(colour, strlen(c) + 1, c);

	year = t;
	price = r;
}

void Car::Print()
{
	cout << "Model ---> " << model << "\t Country ---> " << country << "\t Colour --> " << colour << "\t Age ---> " << year << "\t " << price << endl;
}

Car::~Car()
{
	delete[] model;
	delete[] country;
	delete[] colour;

	cout << "Destruct...\n";
}





int main() {
	Car a("Mers", "Chine", "green", 10, 59937.6);
	a.Print();
}

/*Створити абстрактний базовий клас «Транспортний засіб» і похідні класи «Автомобіль», «Велосипед», «Віз». Підрахувати час і вартість перевезення пасажирів і вантажів кожним транспортним засобом.*/
#include <iostream>
using namespace std;
class Vehicle {// абстрактний базовий клас «Транспортний засіб»
protected:
	virtual double getTime() = 0;//віртуальна функція - визначає час перевезення
	virtual double getCost() = 0;//віртуальна функція - визначає вартість перевезення
	double distance;//шлях перевезення в км
	double speed;//швидкість транспортного засобу в км/год
	double costHour;//вартість перевезення в грн за 1 км
};


class Car : protected Vehicle {//похідний клас «Автомобіль»
public:
	Car(double speed, double distance, double costHour) {
		this->speed = costHour;
		this->distance = distance;
		this->costHour = costHour;
	}


	double getTime() override { return distance / speed; }


	double getCost() override { return distance * costHour; }


	~Car() {}
};


class Bicycle : protected Vehicle {//похідний клас «Велосипед»
public:
	Bicycle(double speed, double distance, double costHour) {
		this->speed = costHour;
		this->distance = distance;
		this->costHour = costHour;
	}


	double getTime() override { return distance / speed; }


	double getCost() override { return distance * costHour; }


	~Bicycle() {}
};


class Сart : protected Vehicle {//похідний клас «Віз»
public:
	Сart(double speed, double distance, double costHour) {
		this->speed = costHour;
		this->distance = distance;
		this->costHour = costHour;
	}


	double getTime() override { return distance / speed; }


	double getCost() override { return distance * costHour; }


	~Сart() {}
};


int main()
{
	Car A(50, 100, 5);//об'єкт класу Car
	Bicycle B(10, 20, 3);//об'єкт класу Bicycle
	Сart C(5, 10, 4);//об'єкт класу Cart
	cout << "Time of passengers transportation in the car=      " << A.getTime() << " hours" << endl;
	cout << "Time of passengers transportation in the bicycle=  " << B.getTime() << " hours" << endl;
	cout << "Time of cargo transportation=                      " << C.getTime() << " hours" << endl;
	cout << "The cost of transporting passengers in the car=    " << A.getCost() << " grn" << endl;
	cout << "The cost of transporting passengers in the bicycle=" << B.getCost() << " grn" << endl;
	cout << "The cost of shipping=                              " << C.getCost() << " grn" << endl;
}
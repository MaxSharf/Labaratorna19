
#include <iostream>
using namespace std;

class Wheels {// Колеса
public:
	double diametr;
	string type;

	Wheels ()
	{
		cout << "Constructor Wheels Call" << endl;
		diametr = 217;
		type = "not studded"; // не шипованні
	}
	Wheels(double diametr, string type) : Wheels()
	{
		this->diametr = diametr;
		this->type = type;

	}
	~Wheels() 
	{
		cout << "Destructor Wheels Call" << endl;
		diametr = 0.0;
		this->type.clear();

	}
	void InfoWheels() {
		cout << "diametr->" << diametr << endl;
		cout << "type of wheels->" << type << endl;
	}

};

class Engine { //двигун 

public:
	double volume; // об`єм
	double  horsepower; //кінскі сили
	Engine()
	{
		cout << "Constructor Engine Call" << endl;
		volume = 21000;
		horsepower = 310; // не шипованні
	}
	Engine(double volume, double horsepower) : Engine()
	{
		this->volume = volume;
		this->horsepower = horsepower;

	}
	~Engine()
	{
		cout << "Destructor Engine Call" << endl;
		volume = 0.0;
		horsepower = 0.0;

	}
	void InfoEngine() {
		cout << "volume->" << volume << endl;
		cout << "horsepower->" << horsepower << endl;
	}

};
 
class Door {
public:
	int number; // кількість 
	string colorDoor;
	Door()
	{
		cout << "Constructor Door Call" << endl;
		number = 3;
		colorDoor = "Grey"; // не шипованні
	}
	Door(double number, string colorDoor) : Door()
	{
		this->number = number;
		this->colorDoor = colorDoor;

	}
	~Door()
	{
		cout << "Destructor Door Call" << endl;
		number = 0;
		this->colorDoor.clear();

	}
	void InfoDoor() {
		cout << "number door of the car->" << number << endl;
		cout << "color the door->" << colorDoor << endl;
	}


};

class Car: public Wheels , public Door , public Engine
{
public:
	string colorCar;
	string brand;
	Car()
	{
		cout << "Constructor Car Call" << endl;
		brand = "Audi";
		colorCar = "Grey"; // не шипованні
	}
	Car(string brand, string colorCar) : Car()
	{
		this->brand = brand;
		this->colorCar = colorCar;

	}
	~Car()
	{
		cout << "Destructor Car Call" << endl;
		this->colorCar.clear();
		this->brand.clear();
	}
	void InfoCar() {
		cout << "color auto ->" << colorCar << endl;
		cout << "brand auto->" << brand << endl;
	}

	void OriginalAuto() {
		if (colorCar != colorDoor) {
			cout << " auto is not original" << endl;
		}
		else { cout << " auto  original" << endl; }
	}

};

int main()
{
	Car inst1;
	inst1.InfoWheels();
	inst1.InfoEngine();
	inst1.InfoDoor();
	inst1.InfoCar();
	inst1.OriginalAuto();



}


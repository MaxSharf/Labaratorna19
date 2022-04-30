#include <iostream>
#include <conio.h>

using namespace std;


class Circle
{
public:
	double radius;

Circle()
{
	cout << "Constructor Circle Call" << endl;
	radius = 5.25;
}
Circle(double radius ): Circle()
{
		this->radius = radius;
}

~Circle()
{
	cout << "Destructor Square Call" << endl;
	radius = 0;
}
void InfoCircle() {
	cout << "radius->" << radius << endl;
}


};


 class Square
 {
 public:
	 double diagonal;
	 string vud; //Вид квадрата 
Square()
 {
	cout << "Constructor Circle Call" << endl;
	diagonal = 10.5;
	vud = "Rectangular";// Прямокутний
 }
Square(double Diagonal , string vud):Square()
{
	this->diagonal = diagonal;
	this->vud = vud;
}
~Square()
 {
	cout << "Destructor Square Call" << endl;
	diagonal = 0;
	this->vud.clear();

 }
void InfoSquare() {
	cout << "diagonal->" << diagonal << endl;
	cout << "vud->" << vud << endl;

}


 };



 class Circle_in_square : public Circle, public Square
 {
 public:

void Sovmestumost(){
	if ( 2 * radius == diagonal) {
		cout << "True" << endl;
	}
	else {
		cout << "false" << endl;
         }    
}

 };


int main()
{
	Circle_in_square isnt1;
	isnt1.InfoCircle();
	isnt1.InfoSquare();
	isnt1.Sovmestumost();

	_getch();
	return 0;
}


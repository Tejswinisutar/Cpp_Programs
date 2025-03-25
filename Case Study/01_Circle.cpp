#include<iostream>
using namespace std;

class Circle
{
  public:                                /// Public member declarations
      float Radius, Area, Circum;

      Circle();                          /// Default Constructor
      Circle(float Radius);              /// parameterized Constructor
      Circle(const Circle &cRef);        /// Copy Constructor

      ~Circle();                         /// Destructor

      void Calculate_Area();             /// Member Function
      void Calculate_Circumference();
      void Display();

  private:                               /// Private member declaration
      const float PI = 3.14;
};

Circle::Circle()                          /// Default Constructor
{
    Radius = Area = Circum = 0.0;
    cout << "Default Constructor..!\n";
}

Circle::Circle(float Rad)                 /// parameterized Constructor
{
    Radius = Rad;
    Area = Circum = 0.0;
    cout << "Parameterized Constructor..!\n";
}

Circle::Circle(const Circle &cRef)       /// Copy Constructor
{
    Radius = cRef.Radius;
    Area = cRef.Area;
    Circum = cRef.Circum;
    cout << "Copy Constructor..!\n";
}

Circle::~Circle()                         /// Destructor
{
    cout << "Destructor Called..!\n";
}

void Circle::Calculate_Area()               /// Function calculate area
{
    Area = PI * Radius * Radius;
}

void Circle::Calculate_Circumference()       /// Function  calculate circumference
{
    Circum = 2 * PI * Radius;
}

void Circle::Display()                       /// Function display details
{
    cout << "Radius of Circle: " << Radius << "\n";
    cout << "Area of Circle: " << Area << "\n";
    cout << "Circumference of Circle: " << Circum << "\n";
}

int main()
{
    Circle Calc(5.5);                         /// Create parameterized constructor
    Calc.Calculate_Area();
    Calc.Calculate_Circumference();
    Calc.Display();

    return 0;
}

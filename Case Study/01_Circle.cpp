#include<iostream>
#include<conio.h>
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
};                                       /// End Class

Circle::Circle()                          /// Default Constructor
{
    Radius = Area = Circum = 0.0;
    cout<< "\n Default Constructor..!\n";
}

Circle::Circle(float Rad)                 /// parameterized Constructor
{
    Radius = Rad;
    Area = Circum = 0.0;
    cout<< "\n Parameterized Constructor..!\n";
}

Circle::Circle(const Circle &cRef)       /// Copy Constructor
{
    Radius = cRef.Radius;
    Area = cRef.Area;
    Circum = cRef.Circum;
    cout<< "\n Copy Constructor..!\n";
}

Circle::~Circle()                         /// Destructor
{
    cout<< "\n Thank Youuu..!\n";
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
    cout<< "\n Radius of Circle: " << Radius << "\n";
    cout<< "\n Area of Circle: " << Area << "\n";
    cout<< "\n Circumference of Circle: " << Circum << "\n";
}

int main()
{
    Circle Calc(5.5);                         /// Create parameterized constructor
    Calc.Calculate_Area();
    Calc.Calculate_Circumference();
    Calc.Display();

    return 0;
}

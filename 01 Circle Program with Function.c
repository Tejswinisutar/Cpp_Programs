using namespace std;
#include<iostream>
#include<conio.h>

class Circle
{
   public:
          float Rad,Area;
          Circle()
          {
              cout << "\n Circle :: Default Constructor.";

                  Rad = 0.0;
                  Area =0.0;
           }
           void Area_Of_Circle()
           {
               const float PI = 3.1416;
               Area = PI*Rad*Rad
               cout << "\n Circle :: Area of Circle...";
           }
           ~Circle()
           {
               cout << "\n Circle :: Destructor";
               cout << Rad;
           }
};
int main()
{
    Circle obj1;

    getch();

    cout << "\n Radius" << obj1.Rad<<"\n Area ="<< obj1.Area <<".\n";

    getch();

    obj1.Rad = 2.5;
    obj2.Area_Of_Circle();
    getch();

    cout << "\n Area of Circle with Radius"<< obj1.Rad << " is ="<< ibj1.Area<<".\n";

    getch();
    return 0;
}


















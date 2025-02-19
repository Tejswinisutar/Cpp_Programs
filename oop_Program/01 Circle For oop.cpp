using namespace std;
using namespace std;
#include<iostream>
#include<conio.h>

class Calc
{
    private :
            int N1, N2;

            void Addition()
            {
                cout << " \n Inside Private Member Function Addition " << endl;
                Sum = N1 + N2;
                getch();
            }

            void Subtraction()
            {
                cout << " \n Inside Private Member Function Subtraction " << endl;
                Sub = N1 - N2;
                getch();
            }

    public :
            int Sum, Sub;

            Calc()                                           /// Default Constructor
            {
                N1 = N2 = Sum = Sub = 0;

                cout << "\n Inside Default Constructor!!!" << endl;
            }

            Calc(int No1, int No2)                          /// Parameterized Constructor
            {
                N1 = No1;
                N2 = No2;
                Sum = Sub = 0;

                cout << "\n Inside Parameterized Constructor!!!" << endl;
            }

            Calc(Calc &Ref)                                  /// Copy Constructor
            {
                this->N1  = Ref.N1;
                this->N2  = Ref.N2;

                this->Sum = 0;
                this->Sub = 0;

                cout << "\n Inside Copy Constructor!!!" << endl;
            }

            ~Calc()                                          /// Destructor
            {
                cout << " \n Inside Destructor " << Sub << endl;
            }

            void Set_Values()
            {
                cout << "\n Enter 2 Numbers = ";
                cin >> N1 >> N2;
            }

            void Calculate()
            {
                cout << " \n Inside Public Member Function Calculate " << endl;
                getch();
                Addition();
                Subtraction();
            }

};

int main()
{
        Calc Obj1;                      /// Object Created with Default Constructor

        Obj1.Set_Values();

        ///Obj1.Addition();
        ///Obj1.Subtraction();

        Obj1.Calculate();

        cout << "\n Addition for Obj1    => " << Obj1.Sum << endl;
        cout << "\n Subtraction for Obj1 => " << Obj1.Sub << endl;

        Calc Obj2(51, 21);              /// Object Created with Parameterized Constructor

        ///Obj2.Addition();
        ///Obj2.Subtraction();

        Obj2.Calculate();

        cout << "\n Addition for Obj2    => " << Obj2.Sum << endl;
        cout << "\n Subtraction for Obj2 => " << Obj2.Sub << endl;

        getch();

        Calc Obj3(Obj2);                /// Object Created With Copy Constructor

        cout << "\n Addition for Obj3    => " << Obj3.Sum << endl;
        cout << "\n Subtraction for Obj3 => " << Obj3.Sub << endl;

        getch();

        Obj3.Set_Values();

        cout << "\n Addition for Obj3    => " << Obj3.Sum << endl;
        cout << "\n Subtraction for Obj3 => " << Obj3.Sub << endl;

        getch();

        ///Obj3.Addition();
        ///Obj3.Subtraction();
        Obj3.Calculate();

        cout << "\n Addition for Obj3    => " << Obj3.Sum << endl;
        cout << "\n Subtraction for Obj3 => " << Obj3.Sub << endl;

        cout << "\n Back in Main() \n Thanks FRIENDS !!!" << endl;

        getch();
        return 0;
}

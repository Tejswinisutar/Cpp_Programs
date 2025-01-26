using namespace std;

#include<iostream>
#include<conio.h>

void Referance(int&);

int main()
{
    int No=10;

    cout<<No<<endl;

    Referance(No);

    cout<<No<<endl;

    getch();
    return 0;
}
void Referance(int &Ref)
{
     cout<<"Inside Function..."<<endl;
     Ref++;
}

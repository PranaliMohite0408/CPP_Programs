using namespace std;

#include<iostream>
#include<stdio.h>
#include<conio.h>

class Calculator
{
    public:
            int No1,No2,Ans;                ///Data Member or Characterstics or Class Variable.

            Calculator()                    ///Default Constructor of Our Class.
            {
                cout<<endl<<"\nInside Default Constructor !!!"<<endl;
            }

            void Add();                    ///Member Function Add or Behavior Declaration.

            void Sub();                    ///Member Function Sub or Behavior Declaration.

};
void Calculator :: Add()                   ///Member Function or Behavior Definition Outside Class.
{
    Ans = No1+No2;
}

void Calculator :: Sub()                   ///Member Function or Behavior Definition Outside Class.
{
    Ans = No1-No2;
}

int main()
{
    Calculator Obj1,Obj2;

    Obj1.No1 = 10;
    Obj1.No2 = 20;

    Obj1.Add();

    cout<<endl<<"Addition is:"<<Obj1.Ans<<endl;

    Obj2.No1 = 80;
    Obj2.No2 = 70;

    Obj2.Sub();

    cout<<endl<<"Substraction is:"<<Obj2.Ans<<endl;

    getch();
    return 0;
}

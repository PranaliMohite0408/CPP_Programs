using namespace std;
#include<stdio.h>
#include<conio.h>
#include<iostream>

class Demo
{
    public:
        int No1;
        int No2;

        Demo(int i =10, int j =20)
        {
             No1 = i;
             No2 = j;
        }

        void Display(int x)
        {
            cout<<"\nValue of No1 =>"<<No1;
            cout<<"\nValue of No2 =>"<<No2;
            cout<<"\nValue of X =>"<<x;
        }
};

int main()
{
    Demo Obj1;
    Demo Obj2(11);
    Demo Obj3(11,21);

    Obj1.Display(51);
    Obj2.Display(51);
    Obj3.Display(51);

    return 0;
}

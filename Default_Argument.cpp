using namespace std;
#include<stdio.h>
#include<conio.h>
#include<iostream>


class Demo
{
    public:
            float Area(float Radius, float PI = 3.14)
            {
                float Ans = 0;

                Ans = PI * Radius * Radius;
                return Ans;
            }
};

int main()
{
    float value1 = 0.0, value2 = 0.0, Ret = 0.0;

    cout<<"\nEnter Radius =>";
    cin>>value1;

    cout<<"\nEnter Value of PI =>";
    cin>>value2;

    Demo Obj;


    Ret = Obj.Area(value1, value2);
    cout<<"\nArea of Circle is =>"<<Ret;

    Ret = Obj.Area(value1);
    cout<<"\n\nArea of Circle with Default Value =>"<<Ret<<"\n";

    return 0;
}

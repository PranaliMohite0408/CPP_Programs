#include<iostream>
#include<conio.h>
using namespace std;

class Circle
{

    public:
            float Radius,Area,Circumference,Pi;


            Circle()
            {
                cout<<"\nInside Default Constructor of Circle...";
                Pi=3.14;
                Radius= Area = Circumference =0.0;
            }

            void Accept_Details()
            {
                cout<<"\nEnter Radius of Circle=>";
                cin>>Radius;
            }
            void Area_Of_Circle()
            {
                Area = Pi*Radius*Radius;
            }
            void Circumference_Of_Circle()
            {
                Circumference = 2*Pi*Radius;
            }
            void Display_Circle_Details()
            {
                cout<<"\nDetails for Circle You Called...";
                cout<<"\nRadius ="<<Radius;
                cout<<"\nArea ="<<Area;
                cout<<"\nCircumference ="<<Circumference;

            }
             ~Circle()
            {
                cout<<"\nInside Destructor of Circle...";
            }
};

int main()
{
        Circle Obj1;

        Obj1.Accept_Details();
        Obj1.Area_Of_Circle();
        Obj1.Circumference_Of_Circle();

        Obj1.Display_Circle_Details();

        getch();
        return 0;
}

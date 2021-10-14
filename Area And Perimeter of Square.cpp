#include<iostream>
#include<conio.h>
using namespace std;

class Square
{

    public:
            float Perimeter,Area,Side;


            Square()
            {
                cout<<"\nInside Default Constructor of square...";
                Side =0.0;

            }
            void Accept_Details()
            {
                cout<<"\nEnter Side of Square=>";
                cin>>Side;

            }
            void Area_Of_Square()
            {
                Area=Side * Side;
            }
            void Perimeter_of_Square()
            {
                Perimeter = 4 * Side;
            }
            void Display_Square_Details()
            {
                cout<<"\nDetails for Square You Called...";
                cout<<"\nSide of Square  = "<<Side;
                cout<<"\nArea = "<<Area;
                cout<<"\nPerimeter = "<<Perimeter;

            }
             ~Square()
            {
                cout<<"\n\nInside Destructor of Square...";
            }
};

int main()
{
        Square Obj1;

        Obj1.Accept_Details();
        Obj1.Area_Of_Square();
        Obj1.Perimeter_of_Square();

        Obj1.Display_Square_Details();

        getch();
        return 0;
}

#include<iostream>
#include<conio.h>
using namespace std;

class Rectangle
{

    public:
            float L,B,Area,Perimeter;


            Rectangle()
            {
                cout<<"\nInside Default Constructor of Rectangle...";
                L =0.0;
                B=0.0;

            }
            void Accept_Details()
            {
                cout<<"\nEnter Length of Rectangle=>";
                cin>>L;

                cout<<"\nEnter Breadth of Rectangle=>";
                cin>>B;
            }
            void Area_Of_Rectangle()
            {
                Area=L*B;
            }
            void Perimeter_of_Rectangle()
            {
                Perimeter = (2*L) + (2*B);
            }
            void Display_Rectangle_Details()
            {
                cout<<"\nDetails for Rectangle You Called...";
                cout<<"\nLength  = "<<L;
                cout<<"\nBreadth = "<<B;
                cout<<"\nArea = "<<Area;
                cout<<"\nPerimeter = "<<Perimeter;

            }
             ~Rectangle()
            {
                cout<<"\n\nInside Destructor of Rectangle...";
            }
};

int main()
{
        Rectangle Obj1;

        Obj1.Accept_Details();
        Obj1.Area_Of_Rectangle();
        Obj1.Perimeter_of_Rectangle();

        Obj1.Display_Rectangle_Details();

        getch();
        return 0;
}

#include<iostream>
#include<conio.h>
#include<stdlib.h>
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
            void Display_Area_of_Circle()
            {
                cout<<"\nDetails for Circle You Called...";
                cout<<"\nRadius ="<<Radius;
                cout<<"\nArea ="<<Area;
            }
            void Display_Circumference_of_Circle()
            {
                cout<<"\nDetails for Circle You Called...";
                cout<<"\nRadius ="<<Radius;
                cout<<"\nCircumference ="<<Circumference;

            }
             ~Circle()
            {
                cout<<"\nInside Destructor of Circle...";
            }
};
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
            void Accept_Details_of_Rectangle()
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
            void Display_Rectangle_Area()
            {
                cout<<"\nDetails for Rectangle You Called...";
                cout<<"\nLength  = "<<L;
                cout<<"\nBreadth = "<<B;
                cout<<"\nArea = "<<Area;

            }
            void Display_Rectangle_Perimeter()
            {
                cout<<"\nDetails for Rectangle You Called...";
                cout<<"\nLength  = "<<L;
                cout<<"\nBreadth = "<<B;
                cout<<"\nPerimeter = "<<Perimeter;
            }
             ~Rectangle()
            {
                cout<<"\n\nInside Destructor of Rectangle...";
            }
};

class Square
{

    public:
            float Perimeter,Area,Side;


            Square()
            {
                cout<<"\nInside Default Constructor of square...";
                Side =0.0;

            }
            void Accept_Details_of_Square()
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
            void Display_Square_Area()
            {
                cout<<"\nDetails for Square You Called...";
                cout<<"\nSide of Square  = "<<Side;
                cout<<"\nArea = "<<Area;
            }
            void Display_Square_Perimeter()
            {
                cout<<"\nDetails for Square You Called...";
                cout<<"\nSide of Square  = "<<Side;
                cout<<"\nPerimeter = "<<Perimeter;
            }
             ~Square()
            {
                cout<<"\n\nInside Destructor of Square...";
            }
};

int main()
{
       Circle obj1;
       Rectangle obj2;
       Square obj3;
       int choice=0;
       char  ch='\0';

    Up:

        cout<<"\n\n\nSelect Choice: \n\n\t01.Circle \n\t02.Rectangle \n\t03.Square \n\t04.Exit \n";


        cout<<"\n\nEnter Choice=>";
        cin>>choice;

        switch(choice)
        {
            case 1:
                    system("cls");
                    cout<<"\n1.Area of Circle \n2.Circumference of Circle";

                    cout<<"\n\nEnter Choice=> ";
                    cin>> choice;

                    switch(choice)
                    {
                        case 1:
                                cout<<"\nArea of Circle";
                                obj1.Accept_Details();
                                obj1.Area_Of_Circle();
                                obj1.Display_Area_of_Circle();
                                getch();
                                system("cls");
                                goto Up;
                        case 2:
                                cout<<"\nCircumference Of Circle";
                                obj1.Accept_Details();
                                obj1.Circumference_Of_Circle();
                                obj1.Display_Circumference_of_Circle();
                                getch();
                                system("cls");
                                goto Up;

                    }
                    getch();

                    system("cls");
                    goto Up;

            case 2:
                    system("cls");
                    cout<<"\n1.Rectangle Area \n2.Perimeter of Rectangle";

                    cout<<"\n\nEnter Choice=>";
                    cin>>choice;

                    switch(choice)
                    {
                        case 1:
                                cout<<"\nArea of Rectangle";
                                obj2.Accept_Details_of_Rectangle();
                                obj2.Area_Of_Rectangle();
                                obj2.Display_Rectangle_Area();
                                getch();
                                system("cls");
                        case 2:
                                cout<<"\nPerimeter Of Rectangle";
                                obj2.Accept_Details_of_Rectangle();
                                obj2.Perimeter_of_Rectangle();
                                obj2.Display_Rectangle_Perimeter();
                                getch();
                                system("cls");
                                goto Up;


                    }
                    getch();

                    system("cls");
                    goto Up;

          case 3:
                    system("cls");
                    cout<<"\n1.Area of Square \n2.Perimeter of Square";

                    cout<<"\n\nEnter Choice=>";
                    cin>>choice;

                    switch(choice)
                    {
                        case 1:
                                cout<<"\nArea of Square";
                                obj3.Accept_Details_of_Square();
                                obj3.Area_Of_Square();
                                obj3.Display_Square_Area();
                                getch();
                                system("cls");
                                goto Up;
                        case 2:
                                cout<<"\nPerimeter of Square";
                                obj3.Accept_Details_of_Square();
                                obj3.Perimeter_of_Square();
                                obj3.Display_Square_Perimeter();
                                getch();
                                system("cls");
                                goto Up;

                    }
                    getch();

                    system("cls");
                    goto Up;



            case 4 :
                    cout<<"\nAre You Sure?? Do You Want to Exit??(Yes/NO) =";

                    ch = getche();

                    if(ch=='Y' || ch=='y')
                    {
                        goto DWN;
                    }

                    system("cls");

                    goto Up;

            default:
                    cout<<"\nInvalid Input!!! Please Enter Valid choice...";

                    getch();
                    system("cls");
                    goto Up;

        }

       DWN:
           cout<<"\nThanks for Using Service!!! Have a Nice Day!!!";
           cout<<"\n#Pres Any Key To Exit...\n\n";


        getch();
        return 0;
}

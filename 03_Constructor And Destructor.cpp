///Constructor And Destructor (Private , Protected , Public)

using namespace std;
#include<iostream>
#include<stdio.h>
#include<conio.h>

class Constructor_Demo
{
    private :
                int  x , y ;

                void Sun()
                {
                    cout<<"\n Inside PRIVATE Sun() Function Of Our Class .";
                    cout<<"\n Values = "<< x <<" "<< j <<" "<< a <<endl;
                }

    public :
    	 		int i , j ;

    	 		Constructor_Demo()
    	 		{
    	 			i = j = x = y = 0;
    	 			a = b = 1;
    	 			cout<<"\n Inside Default Constructor Of Our Class";
    	 		}

    	 		Constructor_Demo(int N1,int N2,int N3)
    	 		{
    	 			x = y = N1;
    	 			i = j = N2;
    	 			a = b = N3;
    	 			cout<<"\n Inside Parameterized Constructor Of Our Class";
    	 		}

    	 		void Fun()
    	 		{
    	 			cout<<"\n Inside Public Fun() Function Of Our Class";
    	 			cout<<"\n Values = " << x <<" "<< j <<" "<< a <<endl;

    	 			Sun();
    	 			Gun();
    	 		}

    	 		~Constructor_Demo()
    	 		{
    	 			cout<<"\n Inside Destructor Of Our Class";
    	 		}

	protected :

				int a,b ;

				void Gun()
				{
					cout<<"\n Inside PROCTED Gun Function Of Our Class";
					cout<<"\n Values = "<< x <<" "<< i <<" "<< a <<endl;
				}
};

int main()
{
	Constructor_Demo obj1;

	getch();

	obj1.Fun();
	///obj1.Sun();

	Constructor_Demo obj2(60,70,80);

	obj2.Fun();
	///obj2.Gun();

	cout<<endl<<obj1.i;
	cout<<endl<<obj2.j;

	///cout<<endl<<obj2.a;
	///cout<<endl<<obj2.x;

	getch();
	return 0;
}

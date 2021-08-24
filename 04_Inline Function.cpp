/// Inline Function

#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class operation
{
	int a,b,add,sub,mul;
	float div;
        public:
            operation()
            {
                cout<<"\n Inside The Constructor ";
            }
        ~operation()
            {
                cout<<"\n Inside The Destructor ";
            }
            void get();
            void sum();
            void subtraction();
            void multiplication();
            void division();
};

inline void operation :: get()
{
	cout<<"\nEnter first value:";
	cin >> a;
	cout<<"\nEnter second value:";
	cin >> b;
}

inline void operation :: sum()
{
	add = a+b;
	cout << "\nAddition of two numbers: " << a+b <<endl;
}

inline void operation :: subtraction()
{
	sub = a-b;
	cout << "\nDifference of two numbers: " << a-b <<endl;
}

inline void operation :: multiplication()
{
	mul = a*b;
	cout << "\nProduct of two numbers: " << a*b <<endl;
}

inline void operation ::division()
{
	div=a/b;
	cout<<"\nDivision of two numbers: "<<a/b<<endl;
}

int main()
{
	cout << "Program using inline function\n";
	operation obj;
	getch();

	obj.get();
	obj.sum();
	obj.subtraction();
	obj.multiplication();
	obj.division();

	return 0;
}

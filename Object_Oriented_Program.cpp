/*
Consider the below Application which Demonstrate Following thins,
1)Class Designing Stratergy.
2)the Concept of Encapsulation
3)The Concept of Abstraction(Access Specifier)
4)The Types of Constructor.
5)The characterstics and Behaviour.
6)Array and Pointer
7)Dynamic Memory Allocation.
*/

#include<iostream>
using namespace std;

class Array
{
    private:
        int *ptr;
        int Size;

    public:
        Array(int no=5)
        {
            cout<<"\nConstructor";
            Size = no;
            ptr = new int[Size];
        }

        ~Array()
        {
            cout<<"\nDestructor";
            delete []ptr;
        }
        void Accept()
        {
            int iCnt=0;
            cout<<"\nEnter the Elements =>";
            for(iCnt=0;iCnt<Size;iCnt++)
            {
                cin>>ptr[iCnt];
            }
        }
        void Display()
        {
            cout<<"Given Elements Are =>";

            int iCnt=0;

            for(iCnt=0;iCnt<Size;iCnt++)
            {
                cout<<ptr[iCnt]<<"\n";
            }
        }
};
int main()
{
    cout<<"\nInside main \n";

    int Value=0;

    cout<<"Enter Number of Elements =>";
    cin>>Value;

    Array *Obj = NULL;

    Obj = new Array(Value);

    Obj->Accept();

    Obj->Display();

    delete Obj;

    return 0;
}

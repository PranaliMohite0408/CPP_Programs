/*
Consider the below Application which Demonstrate Following things,
1)Class Designing Stratergy.
2)the Concept of Encapsulation
3)The Concept of Abstraction(Access Specifier)
4)The Types of Constructor.
5)The characterstics and Behaviour.
6)Array and Pointer
7)Dynamic Memory Allocation.
8)Copy Constructor and Reference
*/

#include<iostream>
using namespace std;

class Array
{
    private:
        int Size;
        int *ptr;

    public:
        Array(int no=5)
        {
            cout<<"\nConstructor....";
            Size = no;
            ptr = new int[Size];
        }

        Array(Array &Ref)
        {
            cout<<"\nCopy Constructor ";
            Size = Ref.Size;
            ptr = new int[Size];
            int iCnt=0;

            for(iCnt=0; iCnt<Size; iCnt++)
            {
                ptr[iCnt] = Ref.ptr[iCnt];
            }
        }

        ~Array()
        {
            cout<<"\nDestructor....";
            delete []ptr;
        }
        void Accept()
        {
            int iCnt =0;

            for(iCnt=0; iCnt<Size; iCnt++)
            {
                cout<<"\nEnter the Elements "<<iCnt+1<<"=>";
                cin>>ptr[iCnt];
            }
        }
        void Display()
        {
            int iCnt=0;
            cout<<"\nGiven Elements are =>";

            for(iCnt=0; iCnt<Size; iCnt++)
            {
                cout<<"\n"<<ptr[iCnt];
            }
        }

        int Addition()
        {
            int iSum=0, iCnt=0;

            for(iCnt=0; iCnt<Size;iCnt++)
            {
                iSum = iSum + ptr[iCnt];
            }
            return iSum;
        }
};
int main()
{
    cout<<"\nInside Main";

    int Value=0, Sum=0;

    cout<<"\nEnter the Number of Elements =>";
    cin>>Value;

    Array *Obj = new Array(Value); ///Obj = new Array(Value);

    ///Obj = new Array(Value);

    Obj->Accept();

    Obj->Display();

    delete Obj;

    Array Obj1(5);

    Array Obj2(Obj1);

    cout<<"\nObj1 Elements are =>";
    Obj1.Accept();
    Sum = Obj1.Addition();
    cout<<"Addition is =>"<<Sum;



    cout<<"\nObj2 Elements are =>";
    Obj2.Accept();
    Sum = Obj2.Addition();
    cout<<"Addition is =>"<<Sum;
    return 0;

}


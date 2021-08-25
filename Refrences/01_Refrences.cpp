/// Reference

using namespace std;
#include<iostream>
#include<conio.h>

class MyRef
{
public :

    int i , j ,Ref;

    MyRef()
    {
        i = 50,  j = 60;
        cout<<"\n Inside The Constructor "<< endl ;
    }
    ~MyRef()
    {
        cout<<"\n Inside The Destructor "<<endl;
    }
    void Gun()
    {
        cout<<"\n Value Of Ref is : "<< Ref <<endl;
    }
};

int main()
{
     int i =0;

     MyRef obj ;

     int &Ref = i ;

     obj.Gun();
}

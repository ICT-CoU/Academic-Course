//Write a program to demonstrate the ambiguity resolution in inheritance
#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include <exception>
using namespace std;
using namespace std;

void ID()
{
    cout<< "Jewel Nath" <<endl;
    cout<< "ID - 11909037" <<endl;
    cout<< "Program - 34" <<endl<<endl;
}

class A
{
    public:
        void display()
        {
            cout<<"class A"<<endl;
        }
};
class B
{
    public:
        void display()
        {
            cout<<"class B"<<endl;
        }
};
class C : public A, public B
{
public:
    void display()
    {
        cout<<"class C"<<endl;
    }
};
int main()
{
    C object;

    object.A::display();

    object.B::display();

    object.display();
    return 0;
}

//write a program to demonstrate a friend class.

#include<iostream>
#include<iomanip>
using namespace std;


class A
{

    private:
        string name = "Jewel Nath";
        int ID = 11909037;
    public:
        friend class B;
};
class B
{
    public:
        void display(A my)
        {
            cout<<my.name<<endl;
            cout<<my.ID<<endl;
        }
};
int main()
{
    A object1;
    B object2;

    object2.display(object1);

    return 0;
}



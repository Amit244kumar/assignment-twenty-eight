#include<conio.h>
#include<iostream>

using namespace std;

class Mark
{
    private:
       int mark;
    public:
       Mark(int m)
       {
           mark=m;
       }

       void display()
       {
           cout<<"Mark= "<<mark<<endl;
       }
       Mark* operator->()
       {
           return this;
       }
};

int main()
{
    Mark m1(40);
    m1.display();
    m1->display();
    getch();
    return 0;
}

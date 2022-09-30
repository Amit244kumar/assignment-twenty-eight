#include<iostream>
#include<conio.h>
using namespace std;

class Complex
{
     private:
        int real,img;
     public:
         friend void setData(Complex&,int,int);
         void show()
         {
             cout<<real<<"+"<<img<<"i"<<endl;
         }

};

void setData(Complex &c,int real,int img)
{
    c.real=real;
    c.img=img;
}
int main()
{
    Complex c1,c2;
    setData(c1,3,4);
    setData(c2,6,8);
    c1.show();
    c2.show();
    getch();
    return 0;
}

#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
    private:
        int real,img;
    public:
        void setData(int r,int i)
        {
            real=r;
            img=i;
        }
        void show()
        {
            cout<<real<<"+"<<img<<"i"<<endl;
        }
        Complex operator=(Complex c)
        {
            real=c.real;
            img=c.img;
            return c;
        }

};

int main()
{
    Complex c1,c2,c3;
    c1.setData(3,5);
    c2=c3=c1;
    c1.show();
    c2.show();
    c3.show();
    getch();
    return 0;
}
